#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int check(int n){
	int countchan = 0, countle = 0;
	while(n > 0){
		int d = n % 10;
		n /= 10;
		if(d % 2 == 0) countchan++;
		else countle++;
	}
	if(countchan != countle) return 0;
	return 1;
}

void inraketqua(){
	int n;
	cin >> n;
	int a = pow(10, n - 1);
	int b = pow(10, n) - 1;
	int count = 0;
	for(int i = a; i <= b; i++){
		if(check(i)){
			count++;
			cout << i << " ";
		}
		if(count % 10 == 0) cout << endl;
	}
}

int main(){
	inraketqua();
	return 0;
}
