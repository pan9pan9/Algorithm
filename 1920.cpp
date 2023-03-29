#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int N, M;
	int nnum[100001];
	int mnum[100001];
	bool chk;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> nnum[i];
	}
	
	cin >> M;

	for(int i = 0; i < M; i++){
		cin >> mnum[i];
	}
	
	sort(nnum, nnum+N);
	
	for(int i = 0; i < M; i++){
		chk = false;
		int low = 0;
		int high = N-1;
		int mid = (low+high)/2;
		
		while(low <= high){
			
			mid = (low+high)/2;
			if(mnum[i] == nnum[mid]){
				cout << "1" << "\n";
				chk = true;
				break;
			}
			else if(mnum[i] > nnum[mid]){
				low = mid+1;
			}
			else if(mnum[i] < nnum[mid]){
				high = mid-1;
			}
		}
		if(chk == false) cout << "0" <<"\n";
	}
	
	return 0;
}

