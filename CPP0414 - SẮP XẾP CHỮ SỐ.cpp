#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void addNumber(long long n, vector<long long> &b){
	while(n > 0){
		int d = n % 10;
		n /= 10;
		int check = 1;
		for(int i = 0; i < b.size(); i++){
			if(d == b[i]){
				check = 0;  
				break;
			}
		}
		if(check == 1) b.push_back(d);
	}
}

void inraketqua(){
	int n;
	cin >> n;
	vector<long long> a(n);
	vector<long long> b;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		addNumber(a[i], b);
	}	
	sort(b.begin(), b.end());
	for(int i = 0; i < b.size(); i++){
		cout << b[i] << " ";
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
