# Write your MySQL query statement below
UPDATE salary SET
 sex= Case
When sex='m' then 'f'
When sex='f' then 'm'
END;
