def isCorrect(sudoku):
    for i in range(9):
        a=sum(sudoku[i]); b=0
        for j in range(9):
            b += sudoku[j][i]

        if a!=45 or b!=45: return 0

    for i in range(9):
        x=(i//3)*3; y=(i%3)*3
        square = 0
        for a in range(x, x+3):
            square += sum(sudoku[a][y:y+3])

        if square != 45: return 0

    return 1

for tc in range(int(input())):
    sudoku = []
    for i in range(9):
        sudoku.append(list(map(int, input().split())))

    print("#%d"%(tc+1), end=' ')

    print(isCorrect(sudoku))
