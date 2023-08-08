# Write your MySQL query statement below
 SELECT employee_id,
CASE
	WHEN employee_id%2 AND name NOT LIKE "M%" THEN salary
	ELSE 0
END AS bonus
FROM employees
order by employee_id;