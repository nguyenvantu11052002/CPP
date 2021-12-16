#include<bits/stdc++.h>

using namespace std;

int dem = 0;

class Giangvien{
	private:
		string ten, ma, bm;
	public:
		Giangvien(){
			ma = ten = bm = "";
		};
		friend istream& operator >> (istream&, Giangvien &);
		friend ostream& operator << (ostream&, Giangvien);
		string getBm(){
			return this->bm;
		}
};

istream& operator >> (istream &in, Giangvien &a){
	dem++;
	a.ma += "GV" + string(2 - to_string(dem).size(), '0') + to_string(dem);
	getline(in, a.ten);
	getline(in, a.bm);
	return in;
}

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
ostream& operator << (ostream &out, Giangvien a){
	cout << a.ma << " " << a.ten << " " << chuyen(a.bm) << endl;
	return out;
}

int main(){
    Giangvien ds[50];
    int N,i;
    cin >> N;
    map<string, vector<Giangvien> > mp;
    cin.ignore();
    for(i=0;i<N;i++){
    	cin >> ds[i];
    	mp[chuyen(ds[i].getBm())].push_back(ds[i]);
    }
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
    	string s;
    	getline(cin, s);
    	s = chuyen(s);
    	cout << "DANH SACH GIANG VIEN BO MON " << s << ":" << endl;
    	for(Giangvien x : mp[s]){
    		cout << x;
		}
	}
    return 0;
}
