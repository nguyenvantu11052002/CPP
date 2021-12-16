#include<bits/stdc++.h>

using namespace std;

int dem = 0;

class SinhVien{
	private:
		string ma, ten, lop, ns;
		double gpa;
	public:
		SinhVien();
		friend istream& operator >> (istream&, SinhVien &);
		friend ostream& operator << (ostream&, SinhVien );
};

SinhVien::SinhVien(){
	ma = ten = lop = ns = "";
	gpa = 0;
}

//int SinhVien::dem = 0; // cua static thi phai nhu nay :) ngoai ra moi chiu ker :)

void chuanhoa(string &s){
	string res = "";
	string token;
	stringstream ss(s);
	while(ss >> token){
		token[0] = toupper(token[0]);
		for(int i = 1; i < token.size(); i++){
			token[i] = tolower(token[i]);
		}
		res += token;
		res += " ";
	}
	res.erase(res.size() - 1);
	s = res;
}

istream& operator >> (istream &in, SinhVien &a){
	dem++;
	a.ma = "B20DCCN" + string(3 - to_string(dem).size(), '0') + to_string(dem);
	cin.ignore();
	getline(in, a.ten);
	chuanhoa(a.ten);
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

