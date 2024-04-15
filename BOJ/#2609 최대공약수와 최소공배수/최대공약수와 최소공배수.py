def gcd(a, b):
    while b > 0:
        a,b = b,a%b

    return a

def main():
    a,b = map(int, input().split())
    print(gcd(a, b), a*b//gcd(a, b), sep='\n')

main()
