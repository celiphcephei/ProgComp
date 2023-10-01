a, b = map(int, input().split())
res = 1
for i in range(b):
    res *= a
res2 = 1
for i in range(a):
    res2 *= b
print(res - res2)