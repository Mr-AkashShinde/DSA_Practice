# Write your MySQL query statement below

SELECT Emp.name as Employee
FROM Employee Emp, Employee Mgr WHERE Emp.managerId = Mgr.id AND Emp.salary > Mgr.salary;


