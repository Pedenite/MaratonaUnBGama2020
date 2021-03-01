while (True):
    n = int(input())
    if n == -1:
        break

    print(f"Round {n}")
    lifes = 7
    solution = input()
    p = input()
    for c in p:
        if c in solution:
            solution = solution.replace(c, "")
        else:
            lifes -= 1

        if lifes == 0 or solution == "":
            break

    if lifes <= 0:
        print("You lose.")
    elif solution == "":
        print("You win.")
    else:
        print("You chickened out.")
