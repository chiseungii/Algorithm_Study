def solution(book_time):
    minutes = []
    for book in book_time:
        into = int(book[0][:2])*60+int(book[0][3:])
        outto = int(book[1][:2])*60+int(book[1][3:])+10
        minutes.append([into, outto])

    minutes = sorted(minutes, key=lambda x:(x[1], x[0]))

    outs = []
    for m1, m2 in minutes:
        if len(outs) == 0: outs.append(m2)
        else:
            flag = False
            for i in range(len(outs)):
                if m1 >= outs[i]:
                    flag = True
                    outs[i] = m2
                    break

            if not flag: outs.append(m2)

        outs = sorted(outs, reverse=True)

    return len(outs)
