# Write your MySQL query statement below
Select date_id, 
    make_name, 
    Count(Distinct lead_id) AS unique_leads, 
    Count(Distinct partner_id) AS unique_partners
From DailySales
Group By date_id,make_name;