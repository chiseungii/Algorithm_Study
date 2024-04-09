def main():
    n,k = map(int, input().split())

    if k == 1:
        print(1)
        return
    
    cnt = 1
    for i in range(2, n+1):
        if n%i == 0: cnt += 1
        if cnt == k:
            print(i)
            return
        
    print(0)

main()
