#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int count = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			int d = 0;
			while(n % i == 0){
				d++;
				if(d > 1){
					cout << 0 << endl;
					return;
				}
				n /= i;
			}
			count++;
		}
	}
	if(count == 2) cout << 1;
	else  cout << 0;
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
