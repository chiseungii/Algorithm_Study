s = input()
nums,ops = [],[]

idx = 0
for i in range(len(s)):
    if s[i]=='+' or s[i]=='-':
        nums.append(int(s[idx:i]))
        idx = i+1

        ops.append(s[i])
nums.append(int(s[idx:]))

answer = nums[0]
i = 0
while i < len(ops):
    if ops[i] == '+': answer += nums[i+1]
    else:
        tmp = nums[i+1]
        for j in range(i+1, len(ops)):
            if ops[j] == '+': tmp += nums[j+1]
            else:
                answer -= tmp
                tmp = -1
                i = j-1
                break

        if tmp != -1:
            answer -= tmp
            break

    i += 1

print(answer)
