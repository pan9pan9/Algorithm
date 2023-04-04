#include <iostream>
#include <math.h>

using namespace std;

int N, r, c;

int main(){
	cin >> N >> r >> c;
	
	int ans = 0;
	
	while(N != 0){
		N -= 1;
		if(r < pow(2, N) && c < pow(2,N) ){
		}
		
		else if(r < pow(2, N) && c >= pow(2,N)){
			ans += pow(2, N)*pow(2, N);
			c -= pow(2, N);
		}
		
		else if(r >= pow(2, N) && c < pow(2,N)){
			ans += 2*pow(2, N)*pow(2, N);
			r -= pow(2, N);
		}
		else{
			ans += 3*pow(2, N)*pow(2, N);
			r -= pow(2, N);
			c -= pow(2, N);
		}
	}
	
	cout << ans;
	
	return 0;
}
