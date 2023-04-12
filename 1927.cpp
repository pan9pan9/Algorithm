#include <iostream>
#include <queue>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
    
	int n;
	cin >> n;
	
	int a;
	priority_queue<int> pq;
	
	for(int i = 0; i < n; i++){
		cin >> a;
		if(a == 0){
			if(pq.empty()) cout << "0" << "\n";
			else{
				cout << -pq.top() << "\n";
				pq.pop();
			}
		}
		else{
			pq.push(-a);
		}
	}
	
	return 0;
}
