# Write your MySQL query statement below
SELECT E.name, B.bonus
FROM Employee as E 
LEFT JOIN Bonus as B 
ON E.empID = B.empID
WHERE B.Bonus < 1000
OR B.Bonus is null;