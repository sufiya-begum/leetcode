# Write your MySQL query statement below
Select p.firstName,p.lastName,a.city,a.state
from Person p
Left Join Address a
On p.personId = a.personID;