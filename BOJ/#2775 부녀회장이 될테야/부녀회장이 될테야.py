people = [[0 for i in range(15)] for i in range(15)]

for i in range(1, 15): people[0][i] = i
for i in range(1, 15):
    for j in range(1, 15):
        people[i][j] = sum(people[i-1][1:j+1])

for tc in range(int(input())):
    k = int(input())
    n = int(input())
    print(people[k][n])
