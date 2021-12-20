#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string a, b;
	cin >> a >> b;
	string result = "";
	while(a.size() < b.size()) a = "0" + a;
	while(b.size() < a.size()) b = "0" + b;
	int len = a.size() - 1;
	int nho = 0;
	for(int i = len; i >= 0; i--){
		int so = (a[i] - '0') + (b[i] - '0') + nho;
		result = char((so % 10) + '0') + result;
		nho = so/10;
	}
	if(nho > 0) result = char(nho + '0') + result;
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
