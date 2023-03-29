#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	int cnt = 0;
	int num = 665;
	int temp;
	
	while(cnt != N){
		num++;
		temp = num;
		while(temp != 0){
			if(temp%1000 == 666){
				cnt++;
				break;
			}
			else temp /= 10;
		}
	}
	cout << num;
	return 0;
}
