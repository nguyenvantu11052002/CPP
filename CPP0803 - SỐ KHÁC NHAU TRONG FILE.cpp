#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
	ifstream fin;
	fin.open("DATA.in");
	int x;
	map<int, int> mp;
	while(fin >> x){
		mp[x]++;
	}
	for(auto x : mp){
		cout << x.first << " " << x.second << endl;
	}
	fin.close();
	return 0;
}
