-- Fibonacci List Generator
-- Written By: David Shi https://github.com/dshimo
-- To generate a Fibonacci list of size 10
-- 	Call take:    take 10 fibs

fibs = 0 : 1 : [ a + b | (a, b) <- zip fibs (tail fibs) ]