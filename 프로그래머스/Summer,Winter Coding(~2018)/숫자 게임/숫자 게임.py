def solution(A, B):
    A = sorted(A)
    B = sorted(B)

    A_idx,B_idx,cnt = 0,0,0
    size = len(A)

    while A_idx<size and B_idx<size:
        if B[B_idx] > A[A_idx]:
            cnt += 1
            A_idx,B_idx = A_idx+1,B_idx+1
        else:
            while B_idx<size and A[A_idx]>=B[B_idx]:
                B_idx += 1

    return cnt
