# Write your MySQL query statement below
SELECT DISTINCT a.Email AS Email FROM Person a , Person b  WHERE a.Email = b.Email AND a.Id!=b.Id;
