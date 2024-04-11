def main():
    password = input()
    s = input()

    for si in s:
        if si == ' ': print(' ', end='')
        elif si.isupper():
            tmp = ord(si)-ord('A')
            print(password[tmp], end='')
        else:
            tmp = ord(si)-ord('a')
            print(password[tmp], end='')

main()
