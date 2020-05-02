qsort ls = case ls of
	[] 	-> []
	[x]     -> [x]
	otherwise -> qsort ys ++ [x] ++ qsort zs
	where 
		(x:xs) = ls
		ys = [y | y <- xs, y <  x] 
		zs = [z | z <- xs, z >= x]

-- menor m [] = m
-- menor m (n:ns) 
--     | n < m = menor n ns
--     | otherwise = menor m ns

-- steal n (y:ys) = solve (n-1) (y+1) ys
-- solve 0 x ys = 0
-- solve n x [] = 0
-- solve n x (y:ys)
--     | y == x = 0 + solve (n-1) (x+1) ys 
--     | otherwise = 1 + solve n (x+1) (y:ys) --this one works but memory exceeded :(

resolution n (x:xs) = s-x+1-n where s = last (x:xs)

main = do
    input <- getLine
    let n = (read input :: Int)
    line <- getLine
    let ns = map read $ words line :: [Int]
    let orden = qsort ns
    --print $ orden
    print $ resolution n orden
