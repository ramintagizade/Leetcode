# Write your MySQL query statement below

SELECT a.Id as Id FROM Weather a , Weather b WHERE a.Temperature > b.Temperature AND TO_DAYS(a.Date)-TO_DAYS(b.Date)=1;
