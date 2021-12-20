#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string a, b;
	cin >> a >> b;
	string result = "";
	while(a.size() < b.size()) a = "0" + a;
	while(b.size() < a.size()) b = "0" + b;
	if(a < b){
		swap(a, b);
	}
	int len = a.size() - 1;
	int nho = 0;
	for(int i = len; i >= 0; i--){
		int so = (a[i] - '0') - (b[i] - '0') - nho;
		if(so < 0){
			result = char (so + 10 + '0') + result;
			nho = 1;
		}
		else{
			result = char (so + '0') + result;
			nho = 0;
		}
	}
	cout << result << endl;
}

int main(){
	int k;
	cin >> k;
	cin.ignore();
	while(k--){
		inraketqua();
	}
	return 0;
}
