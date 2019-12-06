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
	cout << media(v, n);
}
