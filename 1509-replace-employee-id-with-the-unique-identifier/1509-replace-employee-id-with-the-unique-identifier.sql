# # Write your MySQL query statement below

# select  EmployeeUNI.unique_id ,employees.name
# from  Employees
# left join  EmployeeUNI on employees.id=EmployeeUNI.unique_id;
# Write your MySQL query statement below
select 
eu.unique_id as unique_id, e.name as name
from Employees e left join EmployeeUNI eu on e.id = eu.id