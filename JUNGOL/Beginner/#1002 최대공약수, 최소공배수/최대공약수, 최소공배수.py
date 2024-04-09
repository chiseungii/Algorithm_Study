def gcd(a, b):
    while b > 0:
        a,b = b,a%b
    return a

def main():
    n = int(input())
    nums = list(map(int, input().split()))

    a,b = nums[0],nums[0]
    for i in range(1, n):
        a = gcd(a, nums[i])
        b = b*nums[i]//gcd(b, nums[i])

    print(a, b, sep=' ')

main()
