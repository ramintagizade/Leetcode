# Write your MySQL query statement below

SELECT Score , (SELECT count(DISTINCT Score ) FROM Scores  WHERE Score >= b.Score) AS Rank FROM Scores b ORDER BY Score DESC;
