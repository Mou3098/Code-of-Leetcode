# Write your MySQL query statement below
select * from 
(
    select product_id, 'store1' as store, store1 price from Products
    union 
    select product_id, 'store2' as store, store2 price from Products
    union
    select product_id, 'store3' as store, store3 price from Products
)t
where price is not null;