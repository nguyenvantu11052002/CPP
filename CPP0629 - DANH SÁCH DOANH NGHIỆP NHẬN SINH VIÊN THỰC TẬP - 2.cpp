#include<bits/stdc++.h>

using namespace std;

class dn{
	private:
		string ma, ten;
		int so;
	public:
		dn(){
			ma = ten = "";
			so = 0;
		};
		friend istream& operator >> (istream&, dn &);
		friend ostream& operator << (ostream&, dn);
		friend bool operator < (dn a, dn b){
			if(a.so != b.so) return a.so > b.so;
			return a.ma < b.ma;
		}
		int getSo(){
			return this->so;
		}
};

istream& operator >> (istream &in, dn &a){
	in >> a.ma;
	cin.ignore();
	getline(in, a.ten);
	cin >> a.so;
	return in;
}

void sapxep(dn ds[], int n){
	sort(ds, ds + n);
}

ostream& operator << (ostream &out, dn a){
	cout << a.ma << " " << a.ten << " " << a.so << endl;
	return out;
}

int main(){
    dn ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++){
    	cin >> ds[i];
    }
    sapxep(ds, N);
    int q;
    cin >> q;
    while(q--){
    	int a, b;
    	cin >> a >> b;
    	cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
		for(dn x : ds){
			if(x.getSo() >= a && x.getSo() <= b){
				cout << x;
			}
		} 
	}
    return 0;
}
