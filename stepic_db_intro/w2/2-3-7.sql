-- Задание
-- Выведите список товаров с названиями товаров и названиями категорий, в том числе товаров, не принадлежащих ни одной из категорий.
-- Ожидаемый формат результата:

-- +-------------+----------------+
-- | good_name   | category_name  |
-- +-------------+----------------+
-- | good 1      | category 1     |
-- | good 1      | category 2     |
-- | good 2      | category 3     |
-- | good 2      | category 4     |
-- | good 3      | category 7     |
-- ...


-- NB! В запросе для соединения нескольких источников данных операцию соединения можно использовать многократно. Например, для соединения таблиц A, B и C можно использовать запрос вида:

-- SELECT * FROM A
--   LEFT OUTER JOIN B
--     ON A.b_id = B.id
--   LEFT OUTER JOIN C
--     ON a.c_id = C.id
-- ;