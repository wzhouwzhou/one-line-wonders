-- Prime Number Generator
-- Written By: ngweihow https://github.com/ngweihow
-- To generate 10 prime numbers starting from 2
-- 	Call take:    take 10 (primeNum [2..]) 

primeNum [] = []
primeNum (p:ps) = p : primeNum [x|x <- ps, x `mod` p > 0]
