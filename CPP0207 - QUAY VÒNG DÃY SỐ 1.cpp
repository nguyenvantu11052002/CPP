#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

void inraketqua(){
	int n, d;
	cin >> n >> d;
	// thuc hien cap phat bo nho dong n phan tu cho mang arr;
	int *a = new int[1000005];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = d; i < n; i++) cout << a[i] << " ";
	for(int i = 0; i < d; i++) cout << a[i] << " ";
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
