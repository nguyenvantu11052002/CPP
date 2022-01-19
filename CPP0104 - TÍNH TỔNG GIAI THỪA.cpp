#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

void inraketqua(){
	long long n, factorialSum = 0, tich = 1;
	cin >> n;
	for(int i = 1; i <= n; i++){
		tich *= i;
		factorialSum += tich;
	}
	cout << factorialSum;
}

int main(){
	inraketqua();
	return 0;
}
