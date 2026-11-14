# Write your MySQL query statement below
Select stock_name,
 Sum(
    CASE
        when operation = 'Sell'
        then price
        else -price
        END
 ) AS capital_gain_loss
 From Stocks
 Group By stock_name;
