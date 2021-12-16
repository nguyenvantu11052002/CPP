#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string hoten;
	string lop;
	string date;
	float gpa;
};

void nhap(struct SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, a[i].hoten);
		getline(cin, a[i].lop);
		getline(cin, a[i].date);
		cin >> a[i].gpa;
	}
}

void chuanhoavain(string &s){
	string token;
	stringstream ss(s);
	vector<string> v;
	while(getline(ss, token, '/')){
		v.push_back(token);
	}
	if(v[0].size() < 2) v[0] = "0" + v[0];
	if(v[1].size() < 2) v[1] = "0" + v[1];
	cout << v[0] << "/" << v[1] << "/" << v[2] << " ";
}

void in(struct SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		if(i < 9) cout << "B20DCCN00" << i + 1 << " ";
		else cout << "B20DCCN0" << i + 1 << " ";
		cout << a[i].hoten << " " << a[i].lop << " ";
		chuanhoavain(a[i].date);
		cout << setprecision(2) << fixed << a[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
