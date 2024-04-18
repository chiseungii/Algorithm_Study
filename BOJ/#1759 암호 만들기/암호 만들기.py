from itertools import combinations

L,C = map(int, input().split())
words = sorted(input().split())

cmb = list(combinations(words, L))
passwords = []
for c in cmb:
    cntJ,cntM = 0,0
    for ci in c:
        if ci in ['a', 'e', 'i', 'o', 'u']:
            cntM += 1
        else: cntJ += 1

    if cntM>=1 and cntJ>=2:
        passwords.append(''.join(c))

passwords = sorted(passwords)
for pw in passwords:
    print(pw)
