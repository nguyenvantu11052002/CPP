#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
	ifstream fin;
	fin.open("DATA.in");
	int n, m;
	fin >> n >> m;
	int a[n], b[m];
	map<int, int> mp;
	set<int> s1, s2;
	for(int i = 0; i < n; i++){
		fin >> a[i];
		s1.insert(a[i]);
	}
	for(int i = 0; i < m; i++){
		fin >> b[i];
		s2.insert(b[i]);
	}
	for(auto x : s1){
		mp[x]++;
	}
	for(auto x : s2){
		mp[x]++;
	}
	for(auto x : mp){
		if(x.second == 2){
			cout << x.first << " ";
		}
	}
	cout << endl;
	fin.close();
	return 0;
}
