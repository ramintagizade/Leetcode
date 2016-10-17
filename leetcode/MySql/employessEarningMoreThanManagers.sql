# Write your MySQL query statement below
#SELECT a.Name as Employee FROM Employee a  WHERE a.Salary > (SELECT b.Salary FROM Employee b WHERE a.ManagerId = b.Id);
SELECT a.Name as Employee FROM Employee a , Employee b where a.Salary > b.Salary and a.ManagerId = b.Id;
