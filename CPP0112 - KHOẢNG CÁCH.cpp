#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int check(int n){
	while(n > 0){
		int d = n % 10;
		n /= 10;
		if(d != 0 && d != 6 && d != 8) return 0;
	}
	return 1;
}

void inraketqua(){
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	double kcbinhphg = (a - c) * (a - c) + (b - d) * (b - d);
	double kc = sqrt(kcbinhphg);
	cout << setprecision(4) << fixed << kc << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
