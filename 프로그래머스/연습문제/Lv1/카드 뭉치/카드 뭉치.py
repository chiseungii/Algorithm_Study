def solution(cards1, cards2, goal):
    idx1,idx2,idx_goal = 0,0,0
    cards1.append(" ")
    cards2.append(" ")

    while idx_goal < len(goal):
        if cards1[idx1]!=goal[idx_goal] and cards2[idx2]!=goal[idx_goal]:
            return "No"
        elif cards1[idx1] == goal[idx_goal]: idx1 += 1
        else: idx2 += 1

        idx_goal += 1

    return "Yes"
