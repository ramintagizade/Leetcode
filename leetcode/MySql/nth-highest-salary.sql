CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
      SELECT DISTINCT(e.Salary) FROM Employee e WHERE(N-1) = (SELECT COUNT(DISTINCT (e2.Salary)) FROM Employee e2 WHERE e2.Salary > e.Salary)
  );
END
