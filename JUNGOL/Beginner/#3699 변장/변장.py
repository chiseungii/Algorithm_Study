def main():
    for i in range(int(input())):
        n = int(input())

        cnt = {}
        for j in range(n):
            t,s = input().split()
            if s in cnt: cnt[s] += 1
            else: cnt[s] = 1

        answer = 1
        for a,b in cnt.items():
            answer *= (b+1)

        print(answer-1)

main()
