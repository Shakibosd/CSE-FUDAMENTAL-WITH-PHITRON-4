
create database DISTINCT_ORDER_BY_LIMIT_OFFSET;

use DISTINCT_ORDER_BY_LIMIT_OFFSET;

create table employee
(
    Id char(4) primary key,
    Name varchar(20),
    Deg varchar(20),
    Age char(6),
    Salary varchar(20)
);
   
insert into employee(Id,Name,Salary,Deg,Age,Salary) values ('1','A','SSD','20','20k');
insert into employee(Id,Name,Salary,Deg,Age,Salary) values ('2','B','JSD','30','50k');
insert into employee(Id,Name,Salary,Deg,Age,Salary) values ('3','C','PM','40','60k');
insert into employee(Id,Name,Salary,Deg,Age,Salary) values ('4','D','TL','35','55k');
insert into employee(Id,Name,Salary,Deg,Age,Salary) values ('5','E','SSD','32','52k');  

select distinct Deg
from employee

select name 
from employee
order by Age desc

