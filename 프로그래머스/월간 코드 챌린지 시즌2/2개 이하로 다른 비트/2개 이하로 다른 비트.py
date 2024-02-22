def solution(numbers):
    answer = []
    for number in numbers:
        if number%2 == 0: answer.append(number+1)
        else:
            s = str(bin(number))[2:]
            s = '0'+s

            for i in range(len(s)-1, -1, -1):
                if s[i] == '0':
                    s = s[:i]+'10'+s[i+2:]
                    break

            answer.append(int('0b'+s, 2))

    return answer
