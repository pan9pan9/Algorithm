#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int map[501][501];
int temp;
int answer;
bool visited[501][501];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int depth, int x, int y, int sum){
	visited[x][y] = true;
	
	if(depth == 4){
		if(sum > answer) answer = sum;
		return;
	} 

	for(int i = 0; i < 4; i++){
		if(x+dx[i] >= 0 && x+dx[i] < n && y+dy[i] >= 0 && y+dy[i] < m){
			if(visited[x+dx[i]][y+dy[i]] == false){
				visited[x+dx[i]][y+dy[i]] = true;
				dfs(depth+1, x+dx[i], y+dy[i], sum+map[x+dx[i]][y+dy[i]]);
				visited[x+dx[i]][y+dy[i]] = false;			
			}	
		}
	}
}

void shape1(int r, int c)
{
	int sum = 0;
	sum = map[r][c] + map[r][c + 1] + map[r][c + 2] + map[r - 1][c + 1];
	answer = max(answer, sum);
}

void shape2(int r, int c)
{
	int sum = 0;
	sum = map[r][c] + map[r][c + 1] + map[r][c + 2] + map[r + 1][c + 1];
	answer = max(answer, sum);
}

void shape3(int r, int c)
{
	int sum = 0;
	sum = map[r][c] + map[r + 1][c] + map[r + 2][c] + map[r + 1][c + 1];
	answer = max(answer, sum);
}

void shape4(int r, int c)
{
	int sum = 0;
	sum = map[r][c] + map[r - 1][c + 1] + map[r][c + 1] + map[r + 1][c + 1];
	answer = max(answer, sum);
}

int main(){
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> map[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			visited[i][j] = true;
			dfs(1, i, j, map[i][j]);
			visited[i][j] = false;
			if (i - 1 >= 0 && j + 2 < m) shape1(i, j);
			if (j + 2 < m && i + 1 < n) shape2(i, j);
			if (i + 2 < n && j + 1 < m) shape3(i, j);
			if (i + 1 < n && i - 1 >= 0 && j + 1 < m) shape4(i, j);
		}
	}
	
	cout << answer;
	return 0;
}
