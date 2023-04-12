#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	string a;
	cin >> a;
	int ans = 0;
	for(int i = 0 ; i < n; i++){
		ans += a[i] - 48;
	}
	cout << ans;	
	return 0;
}
