
/*
  +----------------+       +-----------------+       +--------------+
  |    Student     |       |      Class      |       |   Attendance |
  +----------------+       +-----------------+       +--------------+
  | Student_ID (PK)|       | Class_ID (PK)   |       | Attendance_ID|
  | Name           |       | Class_Name      |       | Date         |
  | Grade          |       | Teacher_ID (FK) |       | Student_ID   |
  | ...            |       | ...             |       | Status       |
  +----------------+       +-----------------+       +--------------+
          |                          |
          |                          |
          +--------------------------+
                      |
                      |
              +--------------+
              |   Teacher    |
              +--------------+
              | Teacher_ID   |
              | Name         |
              | Subject      |
              | ...          |
              +--------------+
*/

CREATE TABLE Student (
    Student_ID INT PRIMARY KEY,
    Name VARCHAR(100),
    Grade VARCHAR(10)
);

CREATE TABLE Class (
    Class_ID INT PRIMARY KEY,
    Class_Name VARCHAR(100),
    Teacher_ID INT,
    FOREIGN KEY (Teacher_ID) REFERENCES Teacher(Teacher_ID)
);

CREATE TABLE Attendance (
    Attendance_ID INT PRIMARY KEY,
    Date DATE,
    Student_ID INT,
    Status ENUM('Present', 'Absent'),
    FOREIGN KEY (Student_ID) REFERENCES Student(Student_ID)
);

CREATE TABLE Teacher (
    Teacher_ID INT PRIMARY KEY,
    Name VARCHAR(100),
    Subject VARCHAR(100)
);
