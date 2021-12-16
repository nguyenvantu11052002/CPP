#include<bits/stdc++.h>

using namespace std;

struct mathang{
	string ten;
	string nhom;
	double mua, ban, lai;
	int id;
};

void nhap(struct mathang a[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, a[i].ten);
		getline(cin, a[i].nhom);
		cin >> a[i].mua >> a[i].ban;
		a[i].lai = a[i].ban - a[i].mua;
		a[i].id = i + 1;
	}
}

bool cmp(struct mathang a, struct mathang b){
	double loinhuana = a.ban - a.mua;
	double loinhuanb = b.ban - b.mua;
	return loinhuana > loinhuanb;
}

void sapxep(struct mathang a[], int n){
	sort(a, a + n, cmp);
}

void in(struct mathang a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].id << " " << a[i].ten << " " << a[i].nhom << " ";
		cout << setprecision(2) << fixed << a[i].lai << endl;
	}
}

int main(){
	struct mathang mh[105];
	int n; 
	cin >> n;
	nhap(mh, n);
	sapxep(mh, n);
	in(mh, n);
	return 0;
}
