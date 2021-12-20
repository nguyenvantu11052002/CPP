#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int solve(int n){
	if(n % 2 == 0) return 2; // TH2 theo yeu cau de bai;
	if(snt(n)) return n; // TH3 theo yeu cau de bai;
	for(int i = 3; i <= sqrt(n); i++){
		if(n % i == 0){
			if(snt(i)) return i;  // khong bao gio uoc can tim la uoc nguyen to cuoi, vi du 28 = 2 . 2 . 7 thi khong bao gio la 7, dang can tim uoc snt be nhat. 
		}                         // con neu la so cuoi ( == 7 o dong tren) thi n la snt, ma snt thi return o dong 17 roi.
	}
}

void inraketqua(){
	int n;
	cin >> n;
	cout << 1 << " "; // TH1 theo yeu cau de bai;
	for(int i = 2; i <= n; i++){
		cout << solve(i) << " ";
	}
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
