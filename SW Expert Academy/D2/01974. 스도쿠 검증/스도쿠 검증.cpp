#include <iostream>
#include <vector>
using namespace std;

int isCorrect(vector<vector<int>> &sudoku){
	// 가로, 세로 확인
	for(int i=0; i<9; i++){
		int a=0, b=0;
		for(int j=0; j<9; j++){
			a += sudoku[i][j];
			b += sudoku[j][i];
		}
		
		if(a!=45 || b!=45) return 0;
	}
	
	// 정사각형 구역 확인
	for(int i=0; i<9; i++){
		int x=(i/3)*3, y=(i%3)*3;
		int square = 0;
		for(int a=x; a<x+3; a++)
			for(int b=y; b<y+3; b++)
				square += sudoku[a][b];
			
		if(square != 45) return 0;
	}
	
	return 1;
}

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		vector<vector<int>> sudoku;
		for(int i=0; i<9; i++){
			vector<int> v(9);
			for(int j=0; j<9; cin>>v[j++]);
			sudoku.push_back(v);
		}
		
		printf("#%d ", tc+1);
		
		printf("%d\n", isCorrect(sudoku));
	}
}
