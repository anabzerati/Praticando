SELECT employee_id , 
   CASE when employee_id%2 <>0 AND name NOT like 'M%' THEN salary 
   ELSE 0
   END 
   as bonus
FROM Employees
order by employee_id