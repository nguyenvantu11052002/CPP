#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

struct SinhVien{
	string name;
	string lop;
	string date;
	float gpa;
};

void nhap(struct SinhVien &a){
	getline(cin, a.name);
	getline(cin, a.lop);
	getline(cin, a.date);
	cin >> a.gpa;
}
	
void in(struct SinhVien &A){
	vector<string> v;
	for(int i = 0; i < A.date.size(); i++){
		if(A.date[i] != '/'){
			int p = i;
			while(A.date[p] != '/' && p < A.date.size()) p++;
			v.push_back(A.date.substr(i, p - i));
			i = p;
		}
	}
	if(v[0].size() < 2) v[0] = "0" + v[0];
	if(v[1].size() < 2) v[1] = "0" + v[1];
	cout << "B20DCCN001 " << A.name << " " << A.lop << " ";
	cout << v[0] << "/" << v[1] << "/" << v[2] << " ";
	cout << setprecision(2) << fixed << A.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

