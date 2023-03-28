#include <iostream>

using namespace std;

int main(){
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	
	int temp1, temp2, ans;
	
	if(x < y) temp1 = x;
	else temp1 = y;
	
	if(w-x < h-y) temp2 = w-x;
	else temp2 = h-y;
	
	if(temp1 < temp2) ans = temp1;
	else ans = temp2;
	
	cout << temp2;
	
	
	return 0;
}
