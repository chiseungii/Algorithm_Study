from collections import Counter

def main():
    while True:
        s = input()
        if s == "END": break

        cnt = sorted(Counter(s.split()).items())
        for c in cnt: print(c[0], ":", c[1])

main()
