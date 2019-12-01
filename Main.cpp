#include <iostream>
#include "library.h"

using namespace std;

int main(){
	int n=20;
	int v[n];
	riempiVettoreRandom(v, n);
	for(int i=0; i<n; i++){
		cout << v[i] <<" ";
	}
	cout << endl;
	rimuoviElemento(v, n, 13);
	for(int i=0; i<n; i++){
		cout << v[i] <<" ";
	}
}
