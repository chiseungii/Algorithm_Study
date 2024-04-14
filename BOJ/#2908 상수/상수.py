A,B = map(int, input().split())
reverseA,reverseB = 0,0

for i in range(3):
    reverseA = reverseA*10+A%10
    reverseB = reverseB*10+B%10
    A,B = A//10,B//10

print(max(reverseA, reverseB))
