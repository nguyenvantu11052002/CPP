#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	// thuc hien cap phat bo nho dong n phan tu cho mang a;
	int *a = new int[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max) max = a[i];
	}
	cout << max;
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
