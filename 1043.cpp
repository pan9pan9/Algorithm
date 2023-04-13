#include <iostream>
#include <string.h>

using namespace std;

int getParent(int parent[], int x){
	if(parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]);
}

void unionParent(int parent[], int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a < b) parent[b] = a;
	else parent[a] = b;
}

bool findParent(int parent[], int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a == b) return true;
	return false;
}

int partyp[51][52];

int main(){
	
	int N, M;
	cin >> N >> M;
	
	bool partypeople[51];
	int man[51];
	memset(partypeople, false, (N+1)*sizeof(bool));
	
	for(int i = 0; i <= N; i++){
		man[i] = i;
	}
	
	int knp;
	cin >> knp;
	
	int knpeople[51];
	
	for(int i = 0; i < knp; i++){
		cin >> knpeople[i];
		partypeople[knpeople[i]] = true;
	}
	
	for(int i = 1; i < knp; i++){
		unionParent(man, knpeople[i], knpeople[i-1]);
	}
	
	
	
	for(int i = 0; i < M; i++){
		int p;
		cin >> p;
		
		for(int j = 0; j < p; j++){
			cin >> partyp[i][j];
		}
		for(int j = 1; j < p; j++){
			unionParent(man, partyp[i][j], partyp[i][j-1]);
		}
	}
	
	int answer = M;

	
	for(int i = 0; i <= N; i++){
		for(int j = 0; j < knp; j++){
			if(findParent(man, knpeople[j], i)){
				partypeople[i] = true;
			}
		}
	}
	
	for(int i = 0; i < M; i++){
		int j = 0;
		while(partyp[i][j] != 0){
			if(partypeople[partyp[i][j]] == true){
				answer--;
				break;
			}
			j++;
		}
	}
	
	cout << answer;
	
	return 0;
}
