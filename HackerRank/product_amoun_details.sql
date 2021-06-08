SELECT t1.product_name,
       v0 - v1 || '.00',
       v1 || '.00',
       v2 || '.00',
       v3 || '.00'
FROM (
select p.product_name,
       SUM(ii.line_total_price) AS v0,
       SUM(decode(i.time_paid, null, 0, ii.line_total_price)) AS v1,
       SUM(decode(i.time_canceled, null, 0, ii.line_total_price)) AS v2,
       SUM(decode(i.time_refunded, null, 0, ii.line_total_price)) AS v3
from product p,
     invoice i,
     invoice_item ii
where ii.invoice_id = i.id
      and ii.product_id = p.id
group by p.product_name
UNION ALL
SELECT p.product_name,
       0,
       0,
       0,
       0
FROM product p
WHERE NOT EXISTS (SELECT 1 FROM invoice_item ii WHERE ii.product_id = p.id)) t1
order by t1.product_name asc;
