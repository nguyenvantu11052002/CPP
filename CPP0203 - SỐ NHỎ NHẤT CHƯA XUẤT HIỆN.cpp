#include<iostream>
#include<vector>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	vector<int> v(n + 1, 0); // mang co 6 phan tu = 0 , de nhu vay vi de bai yeu cau tim so nguyen duong nen tranh so 0 ra
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		if(x >= 1 && x <= n) v[x] = 1;
	}
	for(int i = 1; i <= n; i++){
		if(!v[i]){
			cout << i << endl;
			return;
		}
	}
	cout << n + 1 << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
