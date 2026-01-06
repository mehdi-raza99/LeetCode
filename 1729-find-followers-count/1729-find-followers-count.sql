# Write your MySQL query statement below

Select user_id, COUNT(*) AS "followers_count" from Followers 
GROUP BY user_id ORDER BY user_id