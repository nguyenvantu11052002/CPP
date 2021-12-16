#include<bits/stdc++.h>

using namespace std;

struct sinhvien{
	string msv;
	string name;
	string lop;
	string email;
	string dn;
	int id;
	void nhap(){
		getline(cin, msv);
		getline(cin, name);
		getline(cin, lop);
		getline(cin, email);
		getline(cin, dn);
	}
	void in(){
		cout << id << " " << msv << " " << name << " " << lop << " " << email << " " << dn << endl;
	}
};


bool cmp(struct sinhvien a, struct sinhvien b){
	return a.msv < b.msv;
}

void sapxep(struct sinhvien a[], int n){
	sort(a, a + n, cmp);
}

void solve(struct sinhvien a[], int n){
	string s;
	getline(cin, s);
	for(int i = 0; i < n; i++){
		if(s == a[i].dn) a[i].in();
	}
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	struct sinhvien a[105];
	for(int i = 0; i < n; i++){
		a[i].nhap();
		a[i].id = i + 1;
	}
	sapxep(a, n);
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		solve(a, n);
	}
	return 0;
}
