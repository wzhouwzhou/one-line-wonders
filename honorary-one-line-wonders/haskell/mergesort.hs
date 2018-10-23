-- Merge Sort Implementation in Haskell
-- 	not one line but simple enough
--
-- Written by: ngweihow https://github.com/ngweihow
--
-- To run:
-- 	mergeSort([1,9,2,8,3,7,4,7,5,6])
-- 		or simply any list you want to sort
--

mergeSort :: [Int] -> [Int]
mergeSort [] = []
mergeSort [x] = [x]
mergeSort xs = merge (mergeSort lft) (mergeSort rgt)
    where 
        len = length xs `div` 2
        lft = take len xs
        rgt = drop len xs

merge :: [Int] -> [Int] -> [Int]
merge x [] = x
merge [] y = y
merge (x:xs) (y:ys) 
    | x == y = x:y:merge xs ys
    | x > y = y:merge (x:xs) ys
    | x < y = x:merge xs (y:ys)
