# Write your MySQL query statement below
Select e1.name AS "Employee" from Employee e1 
JOIN Employee e2 on e1.managerId=e2.id
Where e1.salary > e2.salary