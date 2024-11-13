const getparams = () => {
  const param = new URLSearchParams(window.location.search).get("doctorId");
  if (param) {
    loadTime(param); // Pass the doctorId
    fetch(`https://testing-8az5.onrender.com/doctor_app/list/${param}`)
      .then((request) => request.json())
      .then((data) => displayDetails(data));

    fetch(`https://testing-8az5.onrender.com/doctor_app/review/?doctor_id=${param}`)
      .then((request) => request.json())
      .then((data) => doctorReview(data));
  } else {
    console.error("Doctor ID is missing in the URL.");
  }
};
const doctorReview = (reviews) => {
  reviews.forEach((review) => {
    const parent = document.getElementById("doc-details-review");
    const div = document.createElement("div");
    div.innerHTML = `
      <div class="reviews-card"> 
          <div class="d-flex">
             <div>
                 <img src="./images/girl.png" alt="girl-img">
             </div>
             <div>
                 <h4>${review.reviewer}</h4>
                 <h5>${review.rating}</h5>
             </div>
          </div>
          <br>
          <h4>${review.doctor}</h4> 
          <p>${review.body.slice(0, 130)}</p>
      </div>   
      `;
    parent.appendChild(div);
  });
};

const displayDetails = (doctor) => {
  console.log(doctor);
  const parent = document.getElementById("doc-details");
  const div = document.createElement("div");
  div.innerHTML = `
    <div class="doc-details-container">
      <div class="doctor-img">
          <img src="${doctor.image}" alt="man-img">
      </div>
      <div class="doc-info">
          <h1>${doctor.full_name}</h1>
          <h5 class="w-50">${doctor.designation}</h5>
          <h5>${doctor?.specialization?.map((item) => {
            return `<button class="btn btn-secondary btn-sm">${item}</button>`;
          })}
          </h5>
          <h4>Fees:${doctor.fee}BDT</h4>
          <h6>${doctor.meet_link}</h6>
          <button type="button" class="btn btn-success btn-lg" data-bs-toggle="modal" data-bs-target="#exampleModal">
              Take Appointment
          </button>
      </div>
    </div>
    `;
  parent.appendChild(div);
};

const loadTime = (doctor_id) => {
  if (!doctor_id) {
    console.error("Invalid doctor_id passed to loadTime.");
    return;
  }

  fetch(`https://testing-8az5.onrender.com/doctor_app/availableTime/?doctor_id=${doctor_id}`)
    .then((request) => request.json())
    .then((data) => {
      const parent = document.getElementById("time-container");
      parent.innerHTML = ''; // Clear previous options
      data.forEach((item) => {
        const option = document.createElement("option");
        option.value = item.id;
        option.innerText = item.name;
        parent.appendChild(option);
      });
    })
    .catch((error) => console.error("Error loading available times:", error));
};

const handleAppoinment = () => {
  const param = new URLSearchParams(window.location.search).get("doctorId");
  const status = document.getElementsByName("status");
  const selected = Array.from(status).find((button) => button.checked);
  const symptom = document.getElementById("symptom").value;
  const time = document.getElementById("time-container");
  const selectedTime = time.options[time.selectedIndex];
  const patient_id = localStorage.getItem("patient_id");

  if (!selected || !symptom || !selectedTime) {
    console.error("Incomplete appointment data.");
    return;
  }

  const info = {
    appointment_type: selected.value,
    appointment_status: "Pending",
    time: selectedTime.value,
    symptom: symptom,
    cancel: false,
    patient: patient_id,
    doctor: param,
  };

  fetch("https://testing-8az5.onrender.com/appointment_app/", {
    method: "POST",
    headers: { "Content-Type": "application/json" },
    body: JSON.stringify(info),
  })
    .then((request) => request.json())
    .then(() => {
      window.location.href = `pdf.html?doctorId=${param}`;
    })
    .catch((error) => console.error("Error booking appointment:", error));
};

const loadPatientID = () => {
  const user_id = localStorage.getItem("user_id");
  fetch(`https://testing-8az5.onrender.com/patient_app/list/?user_id=${user_id}`)
    .then((request) => request.json())
    .then((data) => {
      localStorage.setItem("patient_id", data[0].id);
    });
};

loadPatientID();
getparams();
loadTime();
