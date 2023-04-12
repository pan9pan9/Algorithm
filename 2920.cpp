#include <iostream>

using namespace std;

int main(){
	
	int a[8];
	int compare[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	
	for(int i = 0; i < 8; i++){
		cin >> a[i];
	}
	
	bool chk1 = false;
	bool chk2 = false;
	
	for(int i = 0; i < 8; i++){
		if(a[i] != compare[i]){
			chk1 = true;
			break;
		}
	}
	
	for(int i = 0; i < 8; i++){
		if(a[i] != compare[8-i-1]){
			chk2 = true;
			break;
		}
	}
	
	if(chk1 == true && chk2 == true) cout << "mixed";
	else if(chk1 == false) cout << "ascending";
	else cout << "descending";
	
	
	return 0;
}
