tanya n 0 = n
tanya n k
    | n`mod`10 /= 0 = tanya (n-1) (k-1)
    | otherwise = tanya (n`div`10) (k-1)

main = do
    input <- getLine
    let ls = map read $ words input :: [Int]
    let n = ls!!0
    let k = ls!!1
    print $ tanya n k