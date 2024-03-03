def solution(babbling):
    cnt=len(babbling); latest=-1
    for ba in babbling:
        latest=-1; i=0
        while i < len(ba):
            if ba[i]=='a' and latest!=0:
                if i>=len(ba)-2 or ba[i:i+3]!="aya":
                    cnt-=1; break
                else: i+=3; latest=0
            elif ba[i]=='y' and latest!=1:
                if i>=len(ba)-1 or ba[i:i+2]!="ye":
                    cnt-=1; break
                else: i+=2; latest=1
            elif ba[i]=='w' and latest!=2:
                if i>=len(ba)-2 or ba[i:i+3]!="woo":
                    cnt-=1; break
                else: i+=3; latest=2
            elif ba[i]=='m' and latest!=3:
                if i>=len(ba)-1 or ba[i:i+2]!="ma":
                    cnt-=1; break
                else: i+=2; latest=3
            else: cnt-=1; break

    return cnt
