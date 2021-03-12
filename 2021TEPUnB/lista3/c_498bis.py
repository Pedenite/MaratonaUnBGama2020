from sys import stdin

def derivada(nums, x):
	res = 0
	for i, a in enumerate(nums):
		res += a*(i+1)*(x**i)

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
		lista.pop()
	
	if lista != []:
		print(derivada(lista, x))

	num = not num
