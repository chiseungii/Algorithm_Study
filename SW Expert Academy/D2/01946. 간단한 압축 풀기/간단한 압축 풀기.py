for tc in range(int(input())):
    N = int(input())
    alpha = []
    for i in range(N):
        C,K = input().split()
        for j in range(int(K)):
            alpha.append(C)

    print("#%d"%(tc+1))

    for i in range(0, len(alpha), 10):
        if i+10 < len(alpha):
            for a in alpha[i:i+10]:
                print(a, end='')
            print()
        else:
            for a in alpha[i:]:
                print(a, end='')
            print()
