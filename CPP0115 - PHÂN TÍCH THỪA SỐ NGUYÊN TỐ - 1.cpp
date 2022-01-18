#include<iostream>
#include<math.h>
using namespace std;

void inraketqua(){
	long long n;
	cin >> n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			int count = 0;
			while(n % i == 0){
				count++;
				n /= i;
			}
			cout << i << " " << count << " ";
		}
	}
	if(n > 1) cout << n << " " << 1;
	cout << endl;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		inraketqua();
	}
	return 0;
}

