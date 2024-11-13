
-- create database phitron-- 

-- logical and& or|| not! 
use phitron;

-- logical data-- 
create table employee
(
    Id char(4) primary key,
    stName varchar(20),
    Salary varchar(20),
    Joining char(10),
    Age char(6) 
);
   
insert into employee(Id, stName, Salary, Joining, Age) values ('1', 'Shakib', '50000', '2021', '40'); 
insert into employee(Id, stName, Salary, Joining, Age) values ('2', 'Tamim', '20000', '2023', '30');   
insert into employee(Id, stName, Salary, Joining, Age) values ('3', 'Mahmudullah', '10000', '2023', '20');   
insert into employee(Id, stName, Salary, Joining, Age) values ('4', 'Mushfiqur', '15000', '2022', '25');      

-- select *
-- from employee  
-- where Age < '30' and Salary > '20000';

select *
from employee
where Salary > 12000 or (Age < 25 and Salary > 1000);



  