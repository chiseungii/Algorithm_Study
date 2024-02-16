def solution(skill, skill_trees):
    cnt = len(skill_trees)
    for sk in skill_trees:
        index = 0
        for si in sk:
            if si not in skill: continue
            elif si != skill[index]:
                cnt -= 1; break
            else: index += 1

    return cnt
