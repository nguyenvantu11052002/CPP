#include<bits/stdc++.h>

using namespace std;

struct toado{
	int h, t, c;
};

void nhap(toado &a){
	cin >> a.h >> a.t >> a.c;
}

int ktra(toado a){
	if(a.h == a.t && a.t == a.c) return 1;
	return 0;
}

int check(toado a, toado b, toado c, toado d){  // a b c d
	if(ktra(a) && ktra(b) && ktra(c) && ktra(d)) return 1; // a b c
	return 0;
}

void inraketqua(){
	struct toado e, f, c, d, pt, dc, a, b;  //pt : phap tuyen a b c ; dc : vector dc; 
	nhap(e); nhap(f); nhap(c); nhap(d);
	if(check(e, f, c, d)){
		cout << "YES" << endl;
		return;
	}
	a.h = c.h - e.h;
	a.t = c.t - e.t;
	a.c = c.c - e.c;
	b.h = c.h - f.h;
	b.t = c.t - f.t;
	b.c = c.c - f.c;
	pt.h = a.t * b.c - a.c * b.t;
	pt.t = a.c * b.h - a.h * b.c;
	pt.c = a.h * b.t - a.t * b.h;
	dc.h = d.h - c.h;
	dc.t = d.t - c.t;
	dc.c = d.c - c.c;
//	cout << pt.h << " " << pt.t << " " << pt.c << endl;
	int res = pt.h * dc.h + pt.t * dc.t + pt.c * dc.c;
	if(res == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

//3
//1 2 0
//2 3 0
//4 0 0
//0 0 0
//1 1 1
//2 2 2
//3 3 3
//4 4 4
//5 6 7
//-8 -9 -10
//12 19 0
//3 1 5

