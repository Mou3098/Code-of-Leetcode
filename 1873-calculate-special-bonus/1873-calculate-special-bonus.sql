# Write your MySQL query statement below
select employee_id,if(employee_id%2=1 && substring(name,1,1)!='M',salary,0) as bonus from Employees;
