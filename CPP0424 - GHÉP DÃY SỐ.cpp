#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	int k, n;
	cin >> k >> n;
	vector<vector<int> > a(k, vector<int> (n));
	vector<int> b;
	for(int i = 0; i < k; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			b.push_back(a[i][j]);
		}
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
