def isPrime(n):
    if n%2 == 0: return False

    for i in range(3, int(n**0.5)+1, 2):
        if n%i == 0: return False

    return True

def main():
    for n in list(map(int, input().split())):
        if n == 1: print("number one")
        elif isPrime(n): print("prime number")
        else: print("composite number")

main()
