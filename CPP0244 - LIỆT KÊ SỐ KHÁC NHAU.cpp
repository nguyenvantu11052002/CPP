#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		int check = 1;
		for(int j = i + 1; j < n; j++){
			if(a[i] == a[j]){
				check = 0;
				break;
			}
		}
		if(check == 1) b.push_back(a[i]);
	}
	sort(b.begin(), b.end());
	for(int i = 0; i < b.size(); i++){
		cout << b[i] << " ";
	}
}

int main(){
	inraketqua();
	return 0;
}


