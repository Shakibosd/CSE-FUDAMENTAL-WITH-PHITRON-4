-- create database phitron -- 
-- Constraints --
use phitron;

-- student data-- 
create table student (
    Roll char(4) primary key,
    Student_Name varchar(40) not null,
    Email varchar(40) unique,
    Address varchar(250),
    Age int check(Age > 10)
);

insert into student(Roll, Student_Name, Email, Address, Age) values('0001','Syed Nazmus Shakib','syednazmusshakib94@gmail.com','Shaistaganj',20);

insert into student(Roll, Student_Name, Email, Age) values ('0002','Syed Nazmus Shakib','syedeliasahmed636@gmail.com',20);

insert into student(Roll, Student_Name, Email, Age) values('0003','Syed Elias Ahmed','syedeliasahmed@gmail.com',59);

-- library data --    
create table library (
    BookName varchar(50) primary key,
    whoHeirdRoll char(4),
    foreign key (whoHeirdRoll) references student(Roll)
);

insert into library(BookName, whoHeirdRoll) values ('C Shikbo', '0001');

-- course data -- 
create table course (
    courseName varchar(10),
    university varchar(10),
    cradit int,
    primary key(courseName, university)
);

insert into course(courseName, university, cradit) values ('cse1', 'buet', '2');