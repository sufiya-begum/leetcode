# Write your MySQL query statement below
Select c.name As Customers
from Customers c
Left join Orders o
on c.id = o.customerId
where o.customerId is NULL;