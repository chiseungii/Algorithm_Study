def solution(order):
    boxes = [0 for i in range(len(order))]
    for i in range(len(order)):
        boxes[order[i]-1] = i+1

    sub = []
    num,idx = 1,0
    while num <= len(order):
        if idx<len(boxes) and boxes[idx]==num:
            idx,num = idx+1,num+1
        elif len(sub)>0 and sub[-1]==num:
            sub.pop(-1); num+=1
        else:
            while idx<len(boxes) and boxes[idx]!=num:
                sub.append(boxes[idx])
                idx += 1

            if idx >= len(boxes): break
            else: idx,num = idx+1,num+1

    return num-1
