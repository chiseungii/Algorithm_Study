def main():
    s = input()
    ten = 0

    for si in s:
        if si == '1': ten = ten*2+1
        else: ten = ten*2

    print(ten)

main()
