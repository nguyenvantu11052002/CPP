#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	int result = 0;
	for(int i = 0; i < n - 1; i++){ 		// 9 6 5 4 2
		int findAndAdd = a[i] - a[i + 1];
		if(findAndAdd == 1 || findAndAdd == 0) continue;    // y tuong bai nay la cong cac khoang trong lai , vi du day 1 4 9 8 9 thi 1-4 co so 2 va 3 ~ ruslult = 4 - 1- 1 , 4 den 9 co  5 6 7 8  ~ 9 - 4 -1
		else result = result + (findAndAdd - 1); 
	}
	cout << result << endl; 
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
