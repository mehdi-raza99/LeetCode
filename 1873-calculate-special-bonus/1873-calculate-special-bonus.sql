# Write your MySQL query statement below

Select employee_id,
CASE
when employee_id%2 != 0 AND LEFT(name,1) != 'M' THEN salary
ELSE 0
END AS 'bonus'
FROM Employees
ORDER BY employee_id