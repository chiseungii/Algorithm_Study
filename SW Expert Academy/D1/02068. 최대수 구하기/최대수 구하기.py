T = int(input())
for i in range(T):
    a = [int(n) for n in input().split()]
    print("#%d %d"%(i+1, max(a)))
