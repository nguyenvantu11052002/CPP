#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	int l, r;
	for(auto &x : a) cin >> x;
	for(int i = 0; i < n - 1; i++){
		if(a[i] > a[i + 1]){
			l = i;
			break;
		}
	}
	for(int i = n - 1; i > 0; i--){
		if(a[i] < a[i - 1]){
			r = i;
			break;
		}
	}
	int min = *min_element(a + l, a + r + 1);  // max la 40 , min la 11
	int max = *max_element(a + l, a + r + 1); // 10 12 20 30 25 11 40 32 31 35 50 60;
	for(int i = 0; i < l; i++){  // khong the chi so sanh min voi a[0] vi ta co day sau : 10 20 30 25 15 40 32 31 50 60 thi so 15 no nam giua 10 va 20 ker.
		if(min < a[i]){          // va muc dich tim ra vi tri thich hop de chen so do vao (l = i) thi ta co doan can sap xep bat dau tu vi tri do nen phai chay for
			l = i;
			break;
		}
	}
	for(int i = n - 1; i > r; i--){
		if(max > a[i]){
			r = i; // nhin vao day so dong 24 la hieu. i dang o so 50. 
			break;
		}
	}
	cout << l + 1 << " " << r + 1 << endl; //index bat dau tu 1
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
