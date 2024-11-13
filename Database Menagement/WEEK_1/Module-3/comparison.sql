
-- create database phitron-- 

-- comparison = != < > <= >= 
use phitron;

-- student data-- 
create table comparison
(
    Roll char(4) primary key,
    Age char(4)
);
   
insert into comparison(Roll, Age) values ('1','20');   
insert into comparison(Roll, Age) values ('2','42');   
insert into comparison(Roll, Age) values ('3','52');   
insert into comparison(Roll, Age) values ('4','62');   

select *
from comparison  
where Age>20;


  