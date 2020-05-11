hulk n 
    | n`mod`2 == 1 = "I hate " ++ banner (n-1)
    | otherwise = "I hate " ++ doc (n-1)
banner 0 = "it"
banner n
    | n`mod`2 == 1 = "that I hate " ++ banner (n-1)
    | otherwise = "that I love " ++ banner (n-1)

doc 0 = "it"
doc n
    | n`mod`2 == 0 = "that I hate " ++ doc (n-1)
    | otherwise = "that I love " ++ doc (n-1)

main = do
    ln <- getLine
    let n = (read ln :: Int)
    putStrLn $ hulk n