# Write your MySQL query statement below

Select employee_id,
CASE
when employee_id%2 = 1 AND NOT name LIKE 'M%' THEN salary
ELSE 0
END AS 'bonus'
FROM Employees
ORDER BY employee_id