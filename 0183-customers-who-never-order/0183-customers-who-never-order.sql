# Write your MySQL query statement below
select c.name as Customers 
from Customers c
left join orders o
on o.customerId = c.id
where o.customerId IS NULL

