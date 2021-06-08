SELECT c2.country_name,
       c1.city_name,
       t_qt.qtd
FROM city c1,
     country c2,
     (select avg(t0.qtd) as media
      from (select c.city_id AS id,
                  count(1) AS qtd
      from customer c
      group by c.city_id) t0) t_media,
     (select c.city_id AS id,
                  count(1) AS qtd
           from customer c
           group by c.city_id) t_qt
WHERE t_qt.qtd > t_media.media
      AND t_qt.id = c1.id
      AND c1.country_id = c2.id
ORDER BY c2.country_name ASC
