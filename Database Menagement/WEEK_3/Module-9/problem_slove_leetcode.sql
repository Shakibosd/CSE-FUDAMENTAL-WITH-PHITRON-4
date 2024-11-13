
-- 1 https://leetcode.com/problems/duplicate-emails/
SELECT EMAIL
FROM PERSON
GROUP BY EMAIL
HAVING COUNT(EMAIL) > 1;



-- 2 https://leetcode.com/problems/employees-earning-more-than-their-managers/
SELECT EMP.NAME AS EMPLOYEE
FROM EMPLOYEE AS EMP, EMPLOYEE AS MGR
WHERE EMP.MANAGERID = MGR.ID AND EMP.SALARY > MGR.SALARY;


-- 3 https://leetcode.com/problems/customers-who-never-order/
SELECT NAME AS CUSTOMERS
FROM CUSTOMERS 
WHERE CUSTOMERS.ID
NOT IN (SELECT CustomerId FROM ORDERS);