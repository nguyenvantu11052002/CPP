#include<iostream>

using namespace std;

void quickSort(int a[], int l, int r){
	int p = a[(l + r)/2];
	int i = l;
	int j = r;
	while(i < j){
		while(a[i] < p) i++;
		while(a[j] > p) j--;
		if(i <= j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if(i < r) quickSort(a, i, r);
	if(l < j) quickSort(a, l, j);
}

void inraketqua(){
	int n;
	cin >> n;
	int *a = new int[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	quickSort(a, 0, n - 1);
	cout << a[n - 1] << endl;
	delete[]a;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
