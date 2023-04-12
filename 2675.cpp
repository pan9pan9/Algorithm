#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		string str;
		cin >> str;
		for(int s = 0; s < str.length(); s++){
			for(int j = 0; j < a; j++){
				cout << str[s];
			}	
		}
		cout << "\n";
	}
	return 0;
}
