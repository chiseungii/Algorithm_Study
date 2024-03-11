def solution(sequence, k):
    sums = [sequence[0]]
    for i in range(1, len(sequence)):
        sums.append(sums[i-1]+sequence[i])

    min_dist=len(sequence); min_idx=0
    start,end = -1,0
    while sums[end] < k:
        end += 1

    len_s = len(sequence)
    while end < len_s:
        if start == -1:
            if sums[end] == k:
                if end+1 < min_dist:
                    min_dist = end+1
                    min_idx = 0
                end += 1
            elif sums[end] > k: start += 1
            else: end += 1
        else:
            if sums[end]-sums[start] == k:
                if end-start < min_dist:
                    min_dist = end-start
                    min_idx = start+1
                end += 1
            elif sums[end]-sums[start] > k: start += 1
            else: end += 1

    return [min_idx, min_idx+min_dist-1]
