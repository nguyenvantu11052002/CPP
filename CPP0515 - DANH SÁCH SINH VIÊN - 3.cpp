#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string msv, ten, lop;
    int d, m, y;
    float gpa;
};

string solveMSV(int i)
{
    string s = to_string(i);
    while (s.length() < 3)
        s = "0" + s;
    return "B20DCCN" + s;
}

void chuanHoa(string &s){
	string token;
	stringstream ss(s);
	vector<string> v;
	while(ss >> token){
		v.push_back(token);
	}
	for(int i = 0; i < v.size(); i++){
		v[i][0] = toupper(v[i][0]);
		for(int j = 1; j < v[i].size(); j++){
			v[i][j] = tolower(v[i][j]);
		}
	}
	string res = v[0] + " " + v[1] + " " + v[2];
	s = res;
}

bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa > b.gpa;
}

void nhap(SinhVien ds[], int N)
{
    for (int i = 0; i < N; ++i) {
        scanf("\n");
        ds[i].msv = solveMSV(i + 1);
        getline(cin, ds[i].ten);
        chuanHoa(ds[i].ten);
        getline(cin, ds[i].lop);
        scanf("%d/%d/%d %f", &ds[i].d, &ds[i].m, &ds[i].y, &ds[i].gpa);
    }
}

void sapxep(SinhVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}

void in(SinhVien ds[], int N)
{
    for (int i = 0; i < N; ++i) {
        cout << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " ";
        printf("%.2d/%.2d/%.4d %.2f\n", ds[i].d, ds[i].m, ds[i].y, ds[i].gpa);
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
