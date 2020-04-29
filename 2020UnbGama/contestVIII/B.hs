qsort ls = case ls of
	[] 	-> []
	[x]     -> [x]
	otherwise -> qsort ys ++ [x] ++ qsort zs
	where 
		(x:xs) = ls
		ys = [y | y <- xs, y <  x] 
		zs = [z | z <- xs, z >= x]

menor m [] = m
menor m (n:ns) 
    | n < m = menor n ns
    | otherwise = menor m ns

solve 0 x ys = 0
solve n x (y:ys)
    | y == x+1 = 0 + solve (n-1) (x+1) ys 
    | otherwise = 1 + solve (n-1) (x+1) (y:ys)

main = do
    input <- getLine
    let n = (read input :: Int)
    line <- getLine
    let ns = map read $ words line :: [Int]
    let m = menor 10000000000 ns
    let orden = qsort ns
    print $ orden
    print $ solve n m orden
