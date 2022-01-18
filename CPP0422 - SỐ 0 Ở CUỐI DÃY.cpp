#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	// thuc hien cap phat bo nho dong n phan tu cho mang a;
	long long *a = new long long[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	long long count = 0;
	for(int i = 0; i < n; i++){
		if(a[i] != 0) cout << a[i] << " ";
		else count++;
	}
	for(int i = 0; i < count; i++){
		cout << 0 << " ";
	}
	delete[]a;
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
