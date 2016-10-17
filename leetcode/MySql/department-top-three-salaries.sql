# Write your MySQL query statement below

SELECT t.Request_at AS Day , Round(COUNT(IF(t.Status like "cancelled_%",TRUE,NULL))/COUNT(*),2) AS 'Cancellation Rate' FROM Trips t , Users u
 WHERE  u.Users_Id = t.Client_Id and u.Banned='No' and t.Request_at>='2013-10-01' and t.Request_at<='2013-10-03'
    GROUP BY t.Request_at
