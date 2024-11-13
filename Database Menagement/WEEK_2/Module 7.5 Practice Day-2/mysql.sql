
/*
Questions
1. Show the employee names and corresponding job_titles without using JOIN query
2. Do the question no 1 using JOIN query
3. Show the name of the employee and the job_title who receives the maximum salary
4. Show the list of employee name and corresponding manager names.
*/


-- 1 No Question Ans
SELECT EMPLOYEES.FIRST_NAME, DEPARTMENTS.DEPARTMENT_NAME 
FROM EMPLOYEES, DEPARTMENTS
WHERE EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;
-- 2 No Question Ans
SELECT EMPLOYEES.FIRST_NAME, DEPARTMENTS.DEPARTMENT_NAME
FROM EMPLOYEES
/* RIGHT LEFT CROSS */ INNER JOIN DEPARTMENTS ON EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;
-- 3 No Question Ans
SELECT e.first_name, e.last_name, j.job_title
FROM employees e
JOIN jobs j ON e.job_id = j.job_id
ORDER BY e.salary DESC
LIMIT 1;
-- 4 No Question Ans
SELECT e1.first_name AS employee_name, e2.first_name AS manager_name
FROM employees e1
JOIN employees e2 ON e1.manager_id = e2.employee_id;