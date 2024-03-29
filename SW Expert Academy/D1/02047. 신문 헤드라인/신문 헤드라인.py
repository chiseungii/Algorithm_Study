s = input()
answer = ""

for si in s:
    if si.isalpha():
        answer += si.upper()
    else: answer += si

print(answer)
