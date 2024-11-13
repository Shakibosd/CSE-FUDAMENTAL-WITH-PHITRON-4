// Element Selectors
const searchField = document.getElementById("searchFieldID");
const searchBtn = document.getElementById("searchBtnID");
const usersDirectory = document.getElementById("defaultUsers");
const userGroup = document.getElementById("inGroup");
const userCount = document.getElementById("memberscnt");
const toggleGroup = document.getElementById("toggleBtn");
const viewModal = document.getElementById("playerDeatils");
const homeBtn = document.getElementById("homeBtn");

// Load default players or based on search value
const loadDefault = async (searchValue) => {
  try {
    const response = await fetch(
      `https://www.thesportsdb.com/api/v1/json/3/searchplayers.php?p=${searchValue}`
    );
    
    const data = await response.json();

    // Clear existing content
    usersDirectory.innerHTML = "";

    if (!data.player || data.player.length === 0) {
      usersDirectory.innerHTML = `<h1>No Data Found With "${searchValue}"</h1>`;
      return;
    }

    data.player.slice(0, 10).forEach((user) => {
      usersDirectory.innerHTML += `
        <div class="userCard">
          <div class="profileImg">
            <img
              src="${user.strThumb || "https://st3.depositphotos.com/9998432/13335/v/450/depositphotos_133351928-stock-illustration-default-placeholder-man-and-woman.jpg"}"
              alt="Player Image"
            />
          </div>
          <div class="cardcontent">
            <h3>Name: <span style="font-weight: normal">${user.strPlayer.slice(0, 18)}</span></h3>
            <h3>Nationality: <span style="font-weight: normal">${user.strNationality}</span></h3>
            <h3>Team: <span style="font-weight: normal">${user.strTeam}</span></h3>
            <h3>Sport: <span style="font-weight: normal">${user.strSport}</span></h3>
          </div>
          <div class="cardbtns" id="cardBtns">
            <button onClick="addGroup(${user.idPlayer}, this)">Add To Group</button>
            <button onClick="viewDetails(${user.idPlayer})">View Details</button>
          </div>
        </div>
      `;
    });
  } catch (error) {
    console.error('Error fetching player data:', error);
    usersDirectory.innerHTML = `<h1>Error fetching data</h1>`;
  }
};

loadDefault("");

homeBtn.addEventListener("click", () => {
  window.location.reload();
});

searchBtn.addEventListener("click", () => {
  const searchVal = searchField.value.trim();
  usersDirectory.innerHTML = "";

  if (searchVal) {
    loadDefault(searchVal);
  } else {
    alert("Please Insert A Name");
    loadDefault(""); 
  }
});

// Add User to Group
let groupCount = 0; // Use more descriptive name than 'flag'
const addGroup = (userID, button) => {
  const fetchUserDetails = async (userID) => {
    try {
      const response = await fetch(
        `https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${userID}`
      );
      
      const data = await response.json();
      const user = data.players[0];

      if (groupCount < 11) {
        groupCount += 1;
        button.innerText = "Player Added";
        button.disabled = true;
        button.style.backgroundColor = "rgba(128, 128, 128, 0.74)";
        
        // Update group member count
        userCount.innerText = groupCount.toString();
        
        userGroup.innerHTML += `
          <div class="groupMembers">
            <img
              src="${user.strThumb || "https://st3.depositphotos.com/9998432/13335/v/450/depositphotos_133351928-stock-illustration-default-placeholder-man-and-woman.jpg"}"
              alt="Player Image"
            />
            <div class="membersName">
              <h3 style="font-weight: normal">${user.strPlayer}</h3>
              <h5>${user.strTeam}</h5>
              <h5>${user.strNationality}</h5>
            </div>
          </div>
        `;
      } else {
        alert("You Can't Add More Than 11 Players");
      }
    } catch (error) {
      console.error('Error fetching user details:', error);
    }
  };
  fetchUserDetails(userID);
};

// Toggle Group Visibility
toggleGroup.addEventListener("click", () => {
  // userGroup.style.visibility = userGroup.style.visibility === "hidden" ? "visible" : "hidden";
  userGroup.style.display = userGroup.style.display === "none" ? "block" : "none";

});

// View User Details in Modal
const viewDetails = (userID) => {
  viewModal.style.display = "block";
  
  const fetchUserDetails = async (userID) => {
    try {
      const response = await fetch(
        `https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${userID}`
      );
      
      const data = await response.json();
      const user = data.players[0];

      viewModal.innerHTML = `
        <div class="modalInner">
          <div class="img-icon">
            <div class="close-icon">
              <i onClick="closeBtn()" style="color: #543310;" class="fa-solid fa-circle-xmark"></i>
            </div>
          </div>
          <img
            src="${user.strThumb || "https://st3.depositphotos.com/9998432/13335/v/450/depositphotos_133351928-stock-illustration-default-placeholder-man-and-woman.jpg"}"
            alt="Player Image"
          />
          ${user.strPlayer ? `<h3>Name: <span style="font-weight: normal">${user.strPlayer}</span></h3>` : ''}
          ${user.strNationality ? `<h3>Nationality: <span style="font-weight: normal">${user.strNationality}</span></h3>` : ''}
          ${user.dateBorn ? `<h3>Date of Birth: <span style="font-weight: normal">${user.dateBorn}</span></h3>` : ''}
          ${user.strTeam ? `<h3>Team: <span style="font-weight: normal">${user.strTeam}</span></h3>` : ''}
          ${user.strSport ? `<h3>Sport: <span style="font-weight: normal">${user.strSport}</span></h3>` : ''}
          ${user.strWage ? `<h3>Income: <span style="font-weight: normal">${user.strWage}</span></h3>` : ''}
          ${user.strGender ? `<h3>Gender: <span style="font-weight: normal">${user.strGender}</span></h3>` : ''}
          ${user.strPosition ? `<h3>Playing Position: <span style="font-weight: normal">${user.strPosition}</span></h3>` : ''}
          <div class="socialMedia">
            ${user.strFacebook ? `<a href="https://${user.strFacebook}" target="_blank" rel="noopener noreferrer"><i class="fa-brands fa-facebook"></i></a>` : ''}
            ${user.strInstagram ? `<a href="https://${user.strInstagram}" target="_blank" rel="noopener noreferrer"><i class="fa-brands fa-instagram"></i></a>` : ''}
            ${user.strTwitter ? `<a href="https://${user.strTwitter}" target="_blank" rel="noopener noreferrer"><i class="fa-brands fa-twitter"></i></a>` : ''}
            ${user.strYoutube ? `<a href="https://${user.strYoutube}" target="_blank" rel="noopener noreferrer"><i class="fa-brands fa-youtube"></i></a>` : ''}
            ${user.strWebsite ? `<a href="https://${user.strWebsite}" target="_blank" rel="noopener noreferrer"><i class="fa-brands fa-edge"></i></a>` : ''}
          </div>
          <p>${user.strDescriptionEN || ''}</p>
        </div>
      `;
    } catch (error) {
      console.error('Error fetching user details:', error);
      viewModal.innerHTML = '<p>Error loading details.</p>';
    }
  };

  fetchUserDetails(userID);
};

// Close Modal
const closeBtn = () => {
  viewModal.style.display = "none";
};
