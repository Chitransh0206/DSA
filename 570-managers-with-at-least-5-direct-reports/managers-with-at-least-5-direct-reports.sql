# Write your MySQL query statement below
SELECT E1.name FROM Employee as E1 INNER JOIN Employee as E2 
ON E1.id=E2.managerID
GROUP BY E1.id,E2.managerID
HAVING count(E1.id)>=5;