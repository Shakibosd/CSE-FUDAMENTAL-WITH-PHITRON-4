
-- create database phitron-- 

-- sum + - * / % 
use phitron;

-- student data-- 
create table mark_sum
(
	Roll char(4) primary key,
    cseMark char(4),
    meMark char(4)
);
   
insert into mark_sum(Roll,cseMark,meMark) values ('1','70','80');   

select cseMark + meMark as TotalMarks,
       (cseMark + meMark) / 2 as AverageMark,
       cseMark % 10 as cseLastDigit
from mark_sum  
where Roll = '1';


  