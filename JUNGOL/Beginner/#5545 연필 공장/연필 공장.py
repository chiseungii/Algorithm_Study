def gcd(a, b):
    while b > 0:
        a,b = b,a%b

    return a

def main():
    p,v,k = map(int, input().split())
    p,v = p+1,v+1

    g = p*v//gcd(p, v)
    cnt = [0, 0, 0, 0]

    cnt[1] = k//g
    cnt[2] = k//v-cnt[1]
    cnt[3] = k//p-cnt[1]
    cnt[0] = k-cnt[1]-cnt[2]-cnt[3]

    print(cnt[0], cnt[1], cnt[2], cnt[3], sep=' ')

main()
