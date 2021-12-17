#include<bits/stdc++.h>

using namespace std;

int solve(int n, int a[101][101]){
	int res = 0;
	int sumhang[n] = {0};
	int sumcot[n] = {0};
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			sumhang[i] += a[i][j];
			sumcot[j] += a[i][j];
		}
	}
	int summax = 0;
	for(int i = 0; i < n; i++){
		summax = max(summax, sumhang[i]);
		summax = max(summax, sumcot[i]);
	}
	for(int i = 0, j = 0; i < n, j < n; ){
		int diff = min(summax - sumhang[i], summax - sumcot[j]);  // bai nay hay o cho la so sanh hang i va cot j thi se thay doi gia tri chinh o vi tri a[i][j];
		a[i][j] += diff; 										  // muc dich cua viec lam nay la tim phan can them vao nho nhat giua hang i va cot j de hang i hoac cot j == summax
		sumhang[i] += diff;										  // vi du hang i can thay doi 2 don vi o vi tri aij : aij += 2;
		sumcot[j] += diff; 										  // cot j can thay doi tan 3 don vi nen thay doi vi tri aij them 2 thi cot j khong bao gio > summax;
		res += diff;                                               // TONG QUAT THI LUONG CAN THAY DOI HANG I < LUONG CAN THAY DOI COT J NEN KHONG LO COT J > SUMMAX;	
		if(sumhang[i] == summax) i++;
		if(sumcot[j] == summax) j++;   
	}
	return res;
}

void inraketqua(){
	int n;
	cin >> n;
	int a[101][101];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	cout << solve(n, a) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
