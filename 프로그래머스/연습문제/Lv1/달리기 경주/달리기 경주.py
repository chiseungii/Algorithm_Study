def solution(players, callings):
    m = {}
    for i in range(len(players)):
        m[players[i]] = i

    for call in callings:
        idx = m[call]

        players[idx] = players[idx-1]
        players[idx-1] = call

        m[call] = idx-1
        m[players[idx]] = idx

    return players
