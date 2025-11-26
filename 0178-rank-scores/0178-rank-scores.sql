# Write your MySQL query statement below
Select score, (
    Select COUNT(DISTINCT s2.score) from Scores s2 where s2.score >= s1.score
) AS "Rank"
FROM Scores s1
Order by Score desc