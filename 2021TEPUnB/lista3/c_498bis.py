from sys import stdin

def derivada(nums, x):
	exp = 0
	res = 0
	for i in range(len(nums)-1, 0, -1):
		res += nums[i]*(x**exp)
		exp += 1

	return res

num = True
x = 0
lista = []
for line in stdin:
	if num:
		lista = []
		x = int(line.strip('\n'))
	else:
		lista = list(map(int, line.strip('\n').split(' ')))
	
	if lista != []:
		print(derivada(lista, x))

	num = not num
