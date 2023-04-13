#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int N;
	int home[1001][3];
	int dp[1001][3];
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < 3; j++){
			cin >> home[i][j];
		}
	}

	for(int i = 0; i < 3; i++){
		dp[0][i] = home[0][i];
	}
	
	for(int i = 1; i < N; i++){
		dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + home[i][0];
		dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + home[i][1];
		dp[i][2] = min(dp[i-1][1], dp[i-1][0]) + home[i][2];
	}
	
	cout << min(min(dp[N-1][0], dp[N-1][1]), dp[N-1][2]);
	
	
	return 0;
}
