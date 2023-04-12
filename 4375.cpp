#include <iostream>

using namespace std;

int main(){
	
	int n;
	while(cin >> n){
		int ans = 1;
		int a = 1;
		
		while(a%n != 0){
			ans++;
			a = a * 10 + 1;
			a %= n;
		}
		
		cout << ans << "\n";
	}
	
	return 0;
}
