def main():
    v = []
    max_len = 0
    for i in range(5):
        s = input()
        v.append(s)

        max_len = max(len(s), max_len)

    for i in range(max_len):
        for j in range(5):
            if i >= len(v[j]): continue
            else: print(v[j][i], end='')

main()
