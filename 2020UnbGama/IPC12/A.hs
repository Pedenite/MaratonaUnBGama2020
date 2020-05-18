elephant x
    |x <= 5 = 1
    |otherwise = 1 + elephant (x-5) 

main = do
    line <- getLine
    let x = (read line :: Int)
    print $ elephant x