def main():
    words = []
    while True:
        s = input()
        if s == "END": break

        for si in s.split():
            if si not in words:
                words.append(si)

        for word in words:
            print(word, end=' ')
        print()

main()
