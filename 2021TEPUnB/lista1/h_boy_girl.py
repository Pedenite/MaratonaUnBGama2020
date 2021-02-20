s = input()
qtd = 0
for c in range(ord('a'), ord('z')+1):
    if chr(c) in s:
        qtd += 1

if qtd%2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
