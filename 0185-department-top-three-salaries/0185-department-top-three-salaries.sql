# Write your MySQL query statement below
Select d.name AS 'Department',e.name as "Employee",e.salary as 'Salary' from Employee e
Join Department d
ON d.id=e.departmentId
WHERE (
    SELECT COUNT(DISTINCT salary)
    FROM Employee e2
    WHERE e2.departmentId = e.departmentId
    AND e2.salary > e.salary
) < 3;