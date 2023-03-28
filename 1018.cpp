#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int M, N;

string WB[8] = {
	"WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string board[50];

int WB_cnt(int a, int b){
	int cnt = 0;
	for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(board[a+i][b+j] != WB[i][j])
                cnt++;
        }
    }
	
	return cnt;
}

int BW_cnt(int a, int b){
	int cnt = 0;
	for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(board[a+i][b+j] != BW[i][j])
                cnt++;
        }
    }
	
	return cnt;
}

int main(){
	
	cin >> M >> N;
	
	for(int i = 0; i < M; i++){
			cin >> board[i];
	}
	
	int temp;
	int minn = 99999;
	
	for(int i = 0; i < M-7; i++){
		for(int j = 0; j < N-7; j++){
			temp = min(BW_cnt(i,j), WB_cnt(i,j));
			if(temp < minn) minn = temp;
		}
	}
	
	cout << minn;
	
	return 0;
}
