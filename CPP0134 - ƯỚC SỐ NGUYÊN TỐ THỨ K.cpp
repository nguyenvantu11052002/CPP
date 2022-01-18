#include<iostream>
#include<math.h>
using namespace std;

void inraketqua(){
	long long n, k;
	cin >> n >> k;
	int count = 0;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			count++;
			n /= i;
			if(count == k){
				cout << i;   ///// vi du k = 2 ; n = 226
				break;
			}
		}
		if(count == k) break;	
	}
	/////////// truong hop n = 28;  n > 1;     						   //
	if(count == k - 1 && n > 1) cout << n;      					 //
	if(n > 1 && count < k - 1) cout << -1; // k = 4, count = 2;   	// tat ca truong hop nay count # k nen khong thuc hien neu k == count o tren roi
	/////////// truong hop n = 8;  n == 1;  						//
	if(n == 1 && count < k) cout << -1;	 // k = 4, count = 3	  						  //
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

