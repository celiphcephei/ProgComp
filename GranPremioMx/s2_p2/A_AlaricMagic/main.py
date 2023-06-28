n = int(input())
k = input()
checker = "34579"
count = 0

for i in k:
    if k in checker:
        count += 1

k = int(k)

def prime(k):
    for i in range(2,n+1):
        if k % i == 0:
            return False
        else:
            return True
        
if prime(k):
    count += 1

print(count)