-- create database programminghero;
use programminghero;

create table students(
    Roll char(4) primary key,
    Name varchar(50),
    Marks double
);

-- drop table students;
insert into
    students (Roll, Name, Marks)
values
(2, "Shakib", 67);

set
    sql_safe_updates = 0;

update
    students
set
    Name = "Syed Nazmus Shakib"
where
    Roll = 2;

set
    sql_safe_updates = 1;

-- set sql_safe_updates=0;    
-- delete from students
-- where Roll = 2