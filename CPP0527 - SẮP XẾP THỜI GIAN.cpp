#include<bits/stdc++.h>
 
using namespace std;

struct time{
	int h, m, s;
};

void nhap(struct time tt[], int n){
	for(int i = 0; i < n; i++){
		cin >> tt[i].h >> tt[i].m >> tt[i].s;
	}
}

bool cmp(struct time a, struct time b){
	if(a.h != b.h) return a.h < b.h;
	if(a.m != b.m) return a.m < b.m;
	if(a.s != b.s) return a.s < b.s;
}

void sapxep(struct time tt[], int n){
	sort(tt, tt + n, cmp);
}

void in(struct time tt[], int n){
	for(int i = 0; i < n; i++){
		cout << tt[i].h << " " << tt[i].m << " " << tt[i].s << endl;
	}
}

int main(){
	int n;
	cin >> n;
    struct time tt[n];
    nhap(tt, n);
    sapxep(tt, n);
    in(tt, n);
    return 0;
}
