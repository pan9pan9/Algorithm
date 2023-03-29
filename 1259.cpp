#include <iostream>
#include <string>

using namespace std;

int main(){
	
	while(true){
		string num;
		cin >> num;
		int cnt = 0;
		if(num[0] == '0') break;
		for(int i = 0; i < num.length()/2; i++){
			if(num[i] != num[num.length()-i-1]){
				cout << "no" <<"\n";
				break;
			}
			else cnt++;
		}
		if(cnt == num.length()/2) cout << "yes" << "\n";			
	}
	return 0;
}
