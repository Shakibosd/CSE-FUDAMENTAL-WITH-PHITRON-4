
#pen
class Pen:
    manufacturer = 'pens'

    #Constractor
    def __init__(self, owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.price = price

    def send_sms(self, pen, sms):
        text = f'Sending To: {pen} {sms}'
        print(text)

my_pen = Pen('Metador', 'Orbit', 5)
print(my_pen.owner, my_pen.brand, my_pen.price)

her_pen = Pen('Metador', 'Pencilic', 10)
print(her_pen.owner, her_pen.brand, her_pen.price)

mom_pen = Pen('Metador', 'Pin-Point', 20)
print(mom_pen.owner, mom_pen.brand, mom_pen.price)

#exam
class Exam:
    def __init__(self):
        self.attendees = {}
    
    def attend_exam(self, student_name):
        self.attendees[student_name] = {"marks": None, "wishes": None}
    
    def give_marks(self, student_name, marks):
        if student_name in self.attendees:
            self.attendees[student_name]["marks"] = marks
        else:
            print(f"{student_name} did not attend the exam.")
    
    def give_wishes(self, student_name, wishes):
        if student_name in self.attendees:
            self.attendees[student_name]["wishes"] = wishes
        else:
            print(f"{student_name} did not attend the exam.")
    
    def get_attendees(self):
        return self.attendees

# Example usage:
exam = Exam()

# Students attending the exam
exam.attend_exam("Alice")
exam.attend_exam("Bob")
exam.attend_exam("Charlie")

# Giving marks and wishes
exam.give_marks("Alice", 85)
exam.give_wishes("Alice", "Good luck for your future!")
exam.give_marks("Bob", 75)
exam.give_wishes("Bob", "Keep up the good work!")
exam.give_marks("David", 90)  # David did not attend the exam

# Getting attendees
attendees = exam.get_attendees()
print("Attendees and their details:")
for student, details in attendees.items():
    print(f"Student: {student}, Marks: {details['marks']}, Wishes: {details['wishes']}")
