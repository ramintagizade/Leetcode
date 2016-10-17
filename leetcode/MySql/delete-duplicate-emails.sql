# Write your MySQL query statement below
#SELECT Id , Email AS Id ,Email FROM Person a , Person b WHERE  a.Email = DISTINCT b.Email ;

DELETE a FROM Person a ,Person b WHERE a.Email = b.Email and a.Id > b.Id ;
