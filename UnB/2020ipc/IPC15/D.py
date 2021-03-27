n, k = map(int, input().split())

p = []
t = []
for i in range(n):
	pi, ti = map(int, input().split())

	p.append(pi)
	t.append(ti)
	for j in range(len(p)):
		if pi > p[j]:
			p.insert(j, pi)
			p.pop()
			t.insert(j, ti)
			t.pop()
			break
		elif pi == p[j]:
			if ti <= t[j]:
				p.insert(j, pi)
				p.pop()
				t.insert(j, ti)
				t.pop()
				break
kp = p[k-1]
kt = t[k-1]

res = 0
for i in range(n):
	if p[i] == kp and t[i] == kt:
		res+=1

print(res)
