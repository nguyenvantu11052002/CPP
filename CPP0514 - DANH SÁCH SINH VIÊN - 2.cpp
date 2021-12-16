#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string hoten;
	string lop;
	int d, y, m;
	float gpa;
	string msv;
};

string chuanhoamsv(int i){
	string s = to_string(i);
	while(s.size() < 3){
		s = "0" + s;
	}
	string res = "B20DCCN" + s;
	return res;
}

void chuanhoa(string &s){
	string token;
	stringstream ss(s);
	vector<string> v;
	while(ss >> token){
		v.push_back(token);
	}
	for(int i = 0; i < v.size(); i++){
		v[i][0] = toupper(v[i][0]);
		for(int j = 1; j < v[i].size(); j++){
			v[i][j] = tolower(v[i][j]);
		}
	}
	string res = v[0] + " " + v[1] + " " + v[2];
	s = res;
}

void nhap(struct SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, a[i].hoten);
		a[i].msv = chuanhoamsv(i + 1);
		chuanhoa(a[i].hoten);
		getline(cin, a[i].lop);
		scanf("%d/%d/%d%f", &a[i].d, &a[i].m, &a[i].y, &a[i].gpa);
	}
}

void in(struct SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].msv << " " << a[i].hoten << " ";
		cout << a[i].lop << " ";
		printf("%.2d/%.2d/%.4d %.2f\n", a[i].d, a[i].m, a[i].y, a[i].gpa);
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
