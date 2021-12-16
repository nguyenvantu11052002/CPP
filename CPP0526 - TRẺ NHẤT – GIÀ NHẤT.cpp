#include<bits/stdc++.h>
 
using namespace std;
const long long mod = 1e9 + 7;

struct NhanVien{
	string name;
	int d, m, y;
};

void nhap(struct NhanVien &a){
	cin >> a.name;
	scanf("%d/%d/%d", &a.d, &a.m, &a.y);	
}

bool cmp(struct NhanVien a, struct NhanVien b){
	if(a.y != b.y) return a.y < b.y;
	if(a.m != b.m) return a.m < b.m;
	if(a.d != b.d) return a.d < b.d;	
}

void sapxep(struct NhanVien a[], int n){
	sort(a, a + n, cmp);
}

void in(struct NhanVien a[], int n){
	cout << a[n - 1].name << endl;
	cout << a[0].name << endl;
}
 
int main(){
    struct NhanVien ds[105];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N); // sap xep tu gia den tre nen a[n - 1] tre nhat, a[0] gia nhat;
    in(ds, N);
    return 0;
}
