#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

void inraketqua(){
	long long n, k;
	cin >> n >> k;
	long long sum = 0;
	for(int i = 1; i <= n; i++){
		int d = i % k;
		sum += d;
	}
	if(k == sum) cout << 1;
	else cout << 0;
	cout << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}

