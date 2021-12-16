#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string ma, ten, lop, ns;
		double gpa;
		static int dem;
	public:
		SinhVien();
		friend istream& operator >> (istream&, SinhVien &);
		friend ostream& operator << (ostream&, SinhVien );
		int getdem();
};

SinhVien::SinhVien(){
	ma = ten = lop = ns = "";
	gpa = 0;
}

int SinhVien::dem = 0; // cua static thi phai nhu nay :) ngoai ra moi chiu ker :)

istream& operator >> (istream &in, SinhVien &a){
	a.dem++;
	a.ma = "B20DCCN" + string(3 - to_string(a.dem).size(), '0') + to_string(a.dem);
	cin.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	if(a.ns[2] != '/') a.ns.insert(0, "0");
	if(a.ns[5] != '/') a.ns.insert(3, "0");
	return in;
}

ostream& operator << (ostream &out, SinhVien a){
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << setprecision(2) << fixed << a.gpa << endl;
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
