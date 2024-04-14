for tc in range(int(input())):
    scores = list(map(int, input().split()))
    N = scores[0]
    scores = scores[1:]

    avg = sum(scores)/N
    cnt = 0
    for score in scores:
        if score > avg: cnt += 1

    print("%.3f"%(cnt/N*100), end='')
    print('%')
