def solution(arr):
    # 내림차순 정렬
    arr = sorted(arr, reverse=True)

    # 가장 큰 수의 배수 중에서 최소공배수 찾기
    i = arr[0]
    while True:
        flag = True
        for j in range(1, len(arr)):
            if i%arr[j]:
                flag = False
                break

        if flag: return i
        else: i += arr[0]
