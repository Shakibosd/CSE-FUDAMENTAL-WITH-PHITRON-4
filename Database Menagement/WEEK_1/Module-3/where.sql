
-- create database phitron-- 

-- where
use phitron;

-- student data-- 
create table student
(
    Roll char(4) primary key,
	Std_Name varchar(40) not null,
    Email varchar(40) unique,
    Address varchar(250),
    Age int check(Age>10)
);
   
insert into student(Roll,Std_Name,Email,Address,Age) 
	values ('1','Shakib', 'shakib@gmail.com', 'Shaistaganj', 20);  
    
insert into student(Roll,Std_Name,Email,Address,Age) 
	values ('2','Shakibss', 'shakib67@gmail.com', 'Habiganj', 20);      

select * from student  
where Std_Name='Shakibss';

  