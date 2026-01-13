#include <iostream>
using namespace std;



bool presente(int v[], int dim, int x) {
	for (int i = 0; i < dim; i++) {
		if (v[i] == x) {
			return true;
		}
	}
	return false;
}

void aggiungi(int f[], int &used, int dim, int x) {
	f[used]=x;
	used++;
}
int main() {
	
	int v[5]={1,2,3,4,5};
	int t[7]={1,3,5,7,5,11,13};
	int inter[5];
	int cont=0;
	
	for(int i=0;i<5;i++) {
		if (presente(t, 7, v[i])) {
			if (!presente(inter, 5, v[i])) {
				aggiungi (inter, cont , 5, v[i]);
			}
		}
	}
	
	for (int i = 0; i < cont; i++) {
		cout << inter[i] << " ";
		
	}
	
	
}
