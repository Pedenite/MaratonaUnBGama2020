foo x y
    |x `mod` 2 == 0 || y `mod` 2 == 0 = "No"
    |otherwise = "Yes"

main :: IO()
main = do
    line <- getLine
    let a = (read (takeWhile (/= ' ') line) :: Int)
    let b = (read (drop 1 (dropWhile (/= ' ') line)) :: Int)
    putStrLn (foo a b)

--putStrLn $ show(a) ++ "+" ++ show(b) ++ "=" ++ (show (a+b))