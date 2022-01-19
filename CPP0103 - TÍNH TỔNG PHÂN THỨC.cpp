#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	double sum = 0;
	for(int i = 1; i <= n; i++){
		sum += (double)1/i;
	}
	cout << setprecision(4) << fixed << sum;
}

int main(){
	inraketqua();
	return 0;
}
