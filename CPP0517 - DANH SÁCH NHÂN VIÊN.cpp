#include<bits/stdc++.h>
 
using namespace std;
const long long mod = 1e9 + 7;
 
struct NhanVien{
	string name;
	string sex;
	string date;
	string address;
	string thue;
	string hopdong;
};
 
void nhap(struct NhanVien &a){
	cin.ignore();
    getline(cin, a.name);
    cin >> a.sex;
	cin >> a.date;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.thue;
	cin >> a.hopdong;	
}
 
void inds(struct NhanVien a[], int &N){
	for(int i = 0; i < N; i++){
		if(i < 9){
			cout << "0000" << i + 1 << " ";
		}
		else cout << "000" << i + 1 << " ";
		cout << a[i].name << " " << a[i].sex << " " << a[i].date << " " << a[i].address << " " << a[i].thue << " " << a[i].hopdong << endl;
	}
}
 
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
