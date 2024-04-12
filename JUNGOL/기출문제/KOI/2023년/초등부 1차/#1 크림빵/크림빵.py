def main():
    N,K,P = map(int, input().split())
    breads = list(map(int, input().split()))

    cnt = 0
    for i in range(0, N*K-K+1, K):
        if sum(breads[i:i+K]) > K-P: cnt += 1

    print(cnt)

main()
