#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s1;
	string s2;
	getline(cin, s1);
	getline(cin, s2);
	stringstream ss(s1);
	string token1;
	vector<string> v1;
	while(ss >> token1){
		int check = 1;
		for(int i = 0; i < v1.size(); i++){
			if(token1 == v1[i]){
				check = 0;
				break;
			}
		}
		if(check == 1) v1.push_back(token1);
	}
	sort(v1.begin(), v1.end());
	string token2;
	stringstream sss(s2);
	vector<string> v2;
	while(sss >> token2){
		int check = 1;
		for(int i = 0; i < v2.size(); i++){
			if(token2 == v2[i]){
				check = 0;
				break;
			}
		}
		if(check == 1) v2.push_back(token2);
	}
	for(int i = 0; i < v1.size(); i++){
		int check = 1;
		for(int j = 0; j < v2.size(); j++){
			if(v1[i] == v2[j]){
				check = 0;
				break;
			}
		}
		if(check == 1) cout << v1[i] << " ";
	}
	cout << endl;
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
