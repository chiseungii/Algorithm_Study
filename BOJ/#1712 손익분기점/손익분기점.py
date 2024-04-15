A,B,C = map(int, input().split())

if C <= B: print(-1)
else:
    income = C-B
    print(A//income+1)
