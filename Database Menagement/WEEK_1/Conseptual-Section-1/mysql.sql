-- create database employee; --
use employee;

create table employees(
    id int,
    employee_name varchar(50),
    email varchar(50),
    phone char(11),
    salary float,
    primary key(id)
);

INSERT INTO
    employees(id, employee_name, email, phone, salary)
VALUES
(
        1,
        'Shakib',
        'syednazmusshakib94@gmail.com',
        '01401997130',
        20004.44
    );

INSERT INTO
    employees(id, employee_name, phone, salary)
VALUES
(2, "Mahmud", "003939923", 2400.45);

INSERT INTO
    employees
VALUES
(
        3,
        "Rakib",
        "mahmud@gmail.com",
        "456464",
        6400.45
    );

select
    employee_name,
    salary
from
    employees;

select
    *
from
    employees;

update
    employees
set
    email = "mahmud123@gmail.com"
where
    id = 2;

set
    sql_safe_updates = 0;

update
    employees
set
    salary = 2300.00,
    email = "rakib43@mail.com"
where
    employee_name = "Rakib";

set
    sql_safe_updates = 1;

-- delete from employees;
-- drop table employees;