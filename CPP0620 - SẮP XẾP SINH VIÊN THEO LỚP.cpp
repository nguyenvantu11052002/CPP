#include<bits/stdc++.h>

using namespace std;

int dem = 0;

class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		SinhVien();
		friend istream& operator >> (istream&, SinhVien &);
		friend ostream& operator << (ostream&, SinhVien );
		friend bool operator < (SinhVien a, SinhVien b){
			if(a.lop != b.lop) return a.lop < b.lop;
			return a.ma < b.ma;
		}
};

SinhVien::SinhVien(){
	ma = ten = lop= email = "";
}

istream& operator >> (istream &in, SinhVien &a){
	in >> a.ma;
	cin.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;
}

void sapxep(SinhVien ds[], int n){
	sort(ds, ds + n);
}

ostream& operator << (ostream &out, SinhVien a){
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
	return out;
}

int main(){
    SinhVien ds[1000];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
