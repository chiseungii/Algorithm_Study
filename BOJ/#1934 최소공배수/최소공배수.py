def gcd(a, b):
    while b > 0:
        a,b = b,a%b

    return a

def main():
    for tc in range(int(input())):
        A,B = map(int, input().split())
        print(A*B//gcd(A, B))

main()
