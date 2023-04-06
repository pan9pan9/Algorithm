#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int wrbtn[10];
int N, M;
vector<int> v;

bool isnotwr(int a){
	
	int temp = a;
	v.clear();
	if(temp == 0) v.push_back(0);
	
	while(temp > 0){
		v.push_back(temp%10);
		temp /= 10;
	}
	
	for(int i = 0; i < v.size(); i++){
		for(int j = 0; j < M; j++){
			if(v[i] == wrbtn[j]){
				return false;
			}
		}
	}
	return true;
}

int main(){
		
	cin >> N;
	cin >> M;
	
	for(int i = 0; i < M; i++){
		cin >> wrbtn[i];
	}
	
	int minn = 999999;
		
	for(int i = 0; i <= 1000001; i++){	
		if(isnotwr(i)){
			int ans = v.size()+ abs(i-N);
			minn = min(ans, minn);
		}
	}
	int compare;
	if(N > 100) compare = N - 100;
	else compare = 100 - N;
	
	cout << min(minn, compare);

		
	return 0;
}
