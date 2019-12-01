#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;
int random_min=0; int random_max=100; int dim_max=1000;
int randomNM(int n, int m) {
	srand(time(NULL));
	int numb=rand()%(m-n+1)+n;
	return numb;
}
float randomNM_float(int n, int m) {
	 srand(time(NULL));
	 float numb=n+(float(rand())/float(RAND_MAX/(m-n)));
	 return numb;
}
int random0N(int n) {
	
	
	
	srand(time(NULL));
	int numb= (rand() % n)+1;
	return numb;
}
float random0N_float(int n) {
	srand(time(NULL));
	float numb= (float(rand())/float((RAND_MAX)) * n);
	return numb;
}
void setRandomMin(int min) {
	random_min = min;
}
void setRandomMax(int max) {
	random_max= max;
}
void setDimensioneMax(int x) {
	dim_max=x;
}
void riempiVettore(int v[], int n) {
	int a;
	for(int i=0; i<n; i++){
		cout << "Che valore desideri aggiungere al tuo vettore (solo interi)? ";
		cin >> a;
		v[i]=a;
		cout << endl << "Perfetto," << "l'elemento '" << a << "' è stato aggiunto al vettore!"<< endl;
	}
}
void riempiVettore(float v[], int n) {
	float a;
	for(int i=0; i<n; i++){
		cout << "Che valore desideri aggiungere al tuo vettore? ";
		cin >> a;
		v[i]=a;
		cout << endl << "Perfetto," << "l'elemento '" << a << "' è stato aggiunto al vettore!"<< endl;
	}
}
void riempiVettoreRandom(int v[], int n) {
	for(int i=0; i<n; i++){
		v[i]= rand()%(random_max-random_min+1)+random_min;
	}
}
void riempiVettoreRandom(float v[], int n) {
	for(int i=0; i<n; i++){
		v[i]=random_min+(float(rand())/float(RAND_MAX/(random_max-random_min)));
	}
}
void stampaVettore(float v[], int n){
	for(int i=0; i<n; i++){
		cout << v[i] <<" ";
	}
}
void stampaVettore(int v[], int n){
	for(int i=0; i<n; i++){
		cout << v[i] <<" ";
	}
}

