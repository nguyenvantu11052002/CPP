#include<bits/stdc++.h>
 
using namespace std;
const long long mod = 1e9 + 7;

int z = 1;

struct NhanVien{
	string name;
	string sex;
	int d, m, y;
	string address;
	string thue;
	string hopdong;
	string ma;
};

void nhap(struct NhanVien &a){
	cin.ignore();
    getline(cin, a.name);
    cin >> a.sex;
    string s = to_string(z);
    if(z < 10) a.ma = "0000" + s;
    else a.ma = "000" + s;
    z++;
	scanf("%d/%d/%d", &a.m, &a.d, &a.y);
    cin.ignore();
    getline(cin, a.address);
    cin >> a.thue;
	cin >> a.hopdong;	
}

bool cmp(struct NhanVien a, struct NhanVien b){
	if(a.y != b.y) return a.y < b.y;
	if(a.m != b.m) return a.m < b.m;
	if(a.d != b.d) return a.d < b.d;	
}

void sapxep(struct NhanVien a[], int n){
	sort(a, a + n, cmp);
}

void inds(struct NhanVien a[], int &N){
	for(int i = 0; i < N; i++){
		cout << a[i].ma << " ";
		cout << a[i].name << " " << a[i].sex << " ";
		printf("%.2d/%.2d/%d ", a[i].m, a[i].d, a[i].y);
		cout << a[i].address << " " << a[i].thue << " " << a[i].hopdong << endl;
	}
}
 
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
