#include<bits/stdc++.h>
 
using namespace std;
const long long mod = 1e9 + 7;
 
struct Sinhvien{
	string ma;
	string ten;
	string lop;
	double a, b, c;
};
 
void nhap(struct Sinhvien &a){
	cin.ignore();
	getline(cin, a.ma);
	getline(cin, a.ten);
	getline(cin, a.lop);
	cin >> a.a >> a.b >> a.c;
}
 
void inds(struct Sinhvien a[], int &N){
	for(int i = 0; i < N; i++){
		cout << i + 1 << " " << a[i].ma << " " << a[i].ten << " " << a[i].lop << " ";
		cout << setprecision(1) << fixed << a[i].a << " " << a[i].b << " " << a[i].c << endl;
	}
}
 
int main(){
    struct Sinhvien sv[105];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(sv[i]);
    vector<string> v;
    for(int i = 0; i < N; i++){
    	v.push_back(sv[i].ten);
	}
	for(int i = 0; i < N - 1; i++){
		for(int j = i + 1; j < N; j++){
			if(v[i] > v[j]){
				swap(v[i], v[j]);
				swap(sv[i], sv[j]);
			}
		}
	}
    inds(sv, N);
    return 0;
}
