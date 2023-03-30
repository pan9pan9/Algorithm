#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

int num[500001];
int minuse[4001];
int pluse[4001];
int frenum[2];

int main(){
	
	int N;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> num[i];
		if(num[i] >= 0) pluse[num[i]]++;
		else minuse[-num[i]]++;
	}
	sort(num, num+N);
	
	double avg = 0;
	
	for(int i = 0; i < N; i++){
		avg += num[i];
	}
	
	avg = floor(avg/N + 0.5);
	
	cout << avg << "\n";
	cout.precision(0);
	
	cout << num[N/2] << "\n";
	
	int max = 0;

	for(int i = 0; i <= 4000; i++){
		if(minuse[i] > max){
			max = minuse[i];
		}
		if(pluse[i] > max){
			max = pluse[i];
		} 
	}
	
	vector<int> frevec;
	
	for(int i = 0; i <= 4000; i++){
		if(minuse[i] == max){
			frevec.push_back(-i);
		}
		if(pluse[i] == max){
			frevec.push_back(i);
		} 
	}
	sort(frevec.begin(), frevec.end());
	if(frevec.size() == 1) cout << frevec[0] << "\n";
	else cout << frevec[1] << "\n";
	cout << num[N-1] - num[0];
	
	return 0;
}
