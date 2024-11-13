/*Before ans the questions, please setup the dummydb which I provided on previous module
 
 Questions
 1. Determine the third highest salary and which employee receives it?
 2. Determine the third lowest salary and which employee receives it?
 3. Which employee has been hired after Steven?
 4. With common table expression solve the question 1 and 2*/
--  1 No Question Ans
SELECT employee_id, first_name, last_name, salary
FROM employees
ORDER BY salary DESC
LIMIT 1 OFFSET 2;
--  2 No Question Ans
SELECT employee_id, first_name, last_name, salary
FROM employees
ORDER BY salary
LIMIT 1 OFFSET 2;
--  3 No Question Ans
SELECT employee_id, first_name, last_name, hire_date
FROM employees
WHERE hire_date > (
    SELECT hire_date
    FROM employees
    WHERE first_name = 'Steven'
    ORDER BY hire_date
    LIMIT 1
);
--  4 No Question Ans
WITH RankedEmployees AS (
    SELECT employee_id, first_name, last_name, salary,
           ROW_NUMBER() OVER (ORDER BY salary DESC) AS SalaryRankDesc,
           ROW_NUMBER() OVER (ORDER BY salary) AS SalaryRankAsc
    FROM employees
)
SELECT *
FROM RankedEmployees
WHERE SalaryRankDesc = 3 OR SalaryRankAsc = 3;
