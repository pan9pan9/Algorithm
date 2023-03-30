#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	vector<int> v;
	
	int cnt = 0;
	
	for(int i = 1; i <= N; i++){
		v.push_back(i);
	}
	
	while(true){
		if(cnt == v.size()-1) break;
		cnt++;
		v.push_back(v[cnt]);
		cnt++;
	}
	
	cout << v[cnt];
	
	
	return 0;
}
