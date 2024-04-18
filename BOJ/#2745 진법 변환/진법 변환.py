N,B = input().split()
B = int(B)

answer = 0
for i in range(len(N)):
    if N[i].isdigit():
        answer = answer*B+int(N[i])
    else: answer = answer*B+(ord(N[i])-ord('A')+10)

print(answer)
