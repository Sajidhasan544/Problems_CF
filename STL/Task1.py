n = int(input())
d = 1
res = 0

if n == 1:
    print("0")
else:
    while d < n or d == n:
        res += 1
        d = d *2
    print(res-1)