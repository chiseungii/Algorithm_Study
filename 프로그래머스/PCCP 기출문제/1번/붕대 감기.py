def solution(bandage, health, attacks):
    hp = health
    t = 0

    for attack in attacks:
        while hp < health:
            if attack[0]-t-1 >= bandage[0]:
                hp += (bandage[0]*bandage[1]+bandage[2])
                t += bandage[0]
            else:
                hp += bandage[1]*(attack[0]-t-1)
                break

        hp = min(hp, health)

        t = attack[0]
        hp -= attack[1]

        if hp <= 0: return -1

    return hp
