#include<bits/stdc++.h>

using namespace std;

int dem = 0;

string layten(string s){
	string res = "";
	string token;
	stringstream ss(s);
	while(ss >> token){
		res = token;
	}
	return res;
}

class Giangvien{
	private:
		string ten, ma, bm;
	public:
		Giangvien(){
			ma = ten = bm = "";
		};
		friend istream& operator >> (istream&, Giangvien &);
		friend ostream& operator << (ostream&, Giangvien);
		friend bool operator < (Giangvien a, Giangvien b){
			if(layten(a.ten) != layten(b.ten)) return layten(a.ten) < layten(b.ten);
			return a.ma < b.ma;
		}
};

string chuyen(string s){
	string res = "";
	string token;
	stringstream ss(s);
	while(ss >> token){
		token[0] = toupper(token[0]);
		res += token[0];
	}
	return res;
}

istream& operator >> (istream &in, Giangvien &a){
	dem++;
	a.ma += "GV" + string(2 - to_string(dem).size(), '0') + to_string(dem);
	getline(in, a.ten);
	getline(in, a.bm);
	return in;
}

void sapxep(Giangvien ds[], int n){
	sort(ds, ds + n);
}

ostream& operator << (ostream &out, Giangvien a){
	cout << a.ma << " " << a.ten << " " << chuyen(a.bm) << endl;
	return out;
}

int main(){
    Giangvien ds[50];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
