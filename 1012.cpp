#include <iostream>
#include <string.h>

using namespace std;

int map[51][51];
int m,n,k;
bool visited[51][51];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y){
	visited[x][y] = true;
	
	for(int i = 0; i < 4; i++){
		int nextx = x + dx[i];
		int nexty = y + dy[i];
		
		if(nextx < m && nextx >= 0 && nexty < n && nexty >= 0){
			if(map[nextx][nexty] == 1 && visited[nextx][nexty] == false){
				dfs(nextx, nexty);
			}	
		}		
	}
	
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> m >> n >> k;
		
		for(int j = 0; j < 50; j++){
			memset(map[j], 0, 51*sizeof(int));
			memset(visited[j], false, 51*sizeof(bool));
		}
		
		for(int j = 0; j < k; j++){
			int a, b;
			cin >> a >> b;
			map[a][b] = 1;
		}
		
		int ans = 0;
		
		for(int x = 0; x < m; x++){
			for(int y = 0; y < n; y++){
				if(map[x][y] == 1 && visited[x][y] == false){
					ans++;
					dfs(x, y);
				}
			}
		}
		cout << ans << "\n";
		
	}
	
	
	return 0;
}
