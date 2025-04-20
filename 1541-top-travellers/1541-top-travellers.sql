# Write your MySQL query statement below
SELECT u.name, if(sum(r.distance) is null, 0, sum(r.distance)) AS travelled_distance from Users u
LEFT JOIN Rides r
ON u.id=r.user_id
GROUP BY u.id
ORDER BY travelled_distance DESC ,u.name