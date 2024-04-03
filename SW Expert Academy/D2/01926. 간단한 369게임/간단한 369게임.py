N = int(input())
clap = [0 for i in range(N+1)]

for i in range(3, N+1):
    if i%10==3 or i%10==6 or i%10==9:
        clap[i] = clap[i//10]+1
    else: clap[i] = clap[i//10]

for i in range(1, N+1):
    if clap[i]==0: print(i, end=' ')
    else: print('-'*clap[i], end=' ')
