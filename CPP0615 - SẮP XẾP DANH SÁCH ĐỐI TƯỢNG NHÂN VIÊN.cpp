#include<bits/stdc++.h>

using namespace std;

int dem = 0;

class NhanVien{
	private:
		string ma, ten, gt, ns, dc, thue, hd;
	public:
		NhanVien();
		friend istream& operator >> (istream&, NhanVien &);
		friend ostream& operator << (ostream&, NhanVien);
		friend bool operator < (NhanVien a, NhanVien b){
			string s1 = a.ns, s2 = b.ns;
			int t1 = (s1[0] - '0') * 10 + s1[1] - '0', ng1 = (s1[3] - '0')*10 + s1[4] - '0', n1 = stoi(s1.substr(6));
			int t2 = (s2[0] - '0') * 10 + s2[1] - '0', ng2 = (s2[3] - '0')*10 + s2[4] - '0', n2 = stoi(s2.substr(6));
			if(n1 != n2) return n1 < n2;
			if(t1 != t2) return t1 < t2;
			return ng1 < ng2;
		}
};

NhanVien::NhanVien(){
	ma = ten = gt = ns = dc = thue = hd = "";
}

istream& operator >> (istream &in, NhanVien &a){
	dem++;
	a.ma += string(5 - to_string(dem).size(), '0') + to_string(dem);
	cin.ignore();
	getline(in, a.ten);
	in >> a.gt >> a.ns;
	cin.ignore();
	getline(in, a.dc);
	in >> a.thue >> a.hd;
	return in;
}

void sapxep(NhanVien ds[], int n){
	sort(ds, ds + n);
}

ostream& operator << (ostream &out, NhanVien a){
	cout << a.ma << " " << a.ten << " " << a.gt << " " <<  a.ns << " " << a.dc << " " << a.thue << " " << a.hd << endl;
	return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
