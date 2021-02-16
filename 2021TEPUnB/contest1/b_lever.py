# lever balance -> m1*a = m2*b
# mi = object on left and right sides
# a = distance from pivot (left)
# b = distance from pivot (right)

s = input().replace("=", "0")

ml = []
mr = []
pivot = False

for c in s:
	if 0x30 <= ord(c) <= 0x39:
		if pivot:
			mr.append(int(c))
		else:
			ml.insert(0, int(c))
	elif c == '^':
		pivot = True

mtl = 0
mtr = 0
for i, m in enumerate(ml):
	mtl += m * (i+1)

for i, m in enumerate(mr):
	mtr += m * (i+1)

res = mtl - mtr

# print(mtl, mtr)
if res == 0:
	print("balance")
elif res < 0:
	print("right")
else:
	print("left")
