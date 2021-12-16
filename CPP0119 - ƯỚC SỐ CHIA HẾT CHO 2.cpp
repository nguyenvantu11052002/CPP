#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void inraketqua(){
	long long n, count = 0;
	cin >> n;
		for(int i = 1; i <= sqrt(n); i++){
			if(n % i == 0){
				if(i % 2 == 0) count++;
				if((n/i) % 2 == 0) count++;
				if(i * i == n && i % 2 == 0) count--;
			}
		}
	cout << count << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
