# Write your MySQL query statement below
SELECT s.name from SalesPerson s
where s.sales_id NOT IN (
    SELECT sales_id FROM Orders
    WHERE com_id = (
        SELECT com_id FROM Company
        WHERE name = 'RED'
    )
)