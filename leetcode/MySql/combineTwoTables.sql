# Write your MySQL query statement below

#SELECT Person.FirstName , Person.LastName , Address.City , Address.State from Person INNER JOIN Address ON Person.PersonId=Address.PersonId ;

SELECT  a.FirstName , a.LastName , b.City , b.State  from Person a LEFT JOIN Address b ON a.PersonId = b.PersonId;
