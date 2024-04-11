def main():
    s = input()

    koi,ioi = 0,0
    for i in range(len(s)-2):
        if s[i:i+3] == "KOI": koi += 1
        elif s[i:i+3] == "IOI": ioi += 1

    print(koi, ioi, sep='\n')

main()
