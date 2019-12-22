#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;
int random_min=0; int random_max=100; int dim_max=1000; float average =0; float sum=0; int sum1;
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
void bubbleSort(int v[], int n, bool inverso) {
	if(inverso==true) {
		int k;
		while(k==1) {
			int k=0;
			for(int i=0; i<n; i++) {
				if(v[i]<v[i+1]) {
					swap(v[i], v[i+1]);
					k=1;
				}
			}
		}
	}
	if(inverso==false) {
		int k;
		while(k==1) {
			int k=0;
			for(int i=0; i<n-1; i++) {
				if(v[i]>v[i+1]) {
					swap(v[i], v[i+1]);
					k=1;
				}
			--n;
			}
		}
	}
}
void bubbleSort(float v[], int n, bool inverso) {
	if(inverso==true) {
		int k;
		while(k==1) {
			int k=0;
			for(int i=0; i<n; i++) {
				if(v[i]<v[i+1]) {
					swap(v[i], v[i+1]);
					k=1;
				}
			}
		}
	}
	if(inverso==false) {
		int k;
		while(k==1) {
			int k=0;
			for(int i=0; i<n-1; i++) {
				if(v[i]>v[i+1]) {
					swap(v[i], v[i+1]);
					k=1;
				}
			--n;
			}
		}
	}
}
float media(int v[], int n){
	sum=0;
	for(int i=0; i<n; i++){
		sum+=v[i];
	}
	average= float(sum)/float(n);
	return average;
}
float media(float v[], int n){
	sum=0;
	for(int i=0; i<n; i++){
		sum+=v[i];
	}
	average= float(sum)/float(n);
	return average;
}
float sommaVettore(float v[], int n) {
	sum=0;
	for(int i=0; i<n; i++){
		sum+=v[i];
	}
	return sum;
}
int sommaVettore(int v[], int n) {
	int sum1=0;
	for(int i=0; i<n; i++){
		sum1+= v[i];
	}
	return sum1;
}
bool ricercaBinaria(int v[], int n, int x) {
	int a=0; int b=n-1; int c;
	while(a<=b) {
		c= (a+b)/2;
		if(v[c]==x) {
			return true;
		}
		if(v[c]>x) {
			b=c-1;
		}
		if(v[c]<x){
			a=c+1;
		}
	}
	return false;
}
bool ricercaBinaria(float v[], int n, int x){
	int a=0; int b=n-1; int c;
		while(a<=b) {
			c= (a+b)/2;
			if(v[c]==x) {
				return true;
			}
			if(v[c]>x) {
				b=c-1;
			}
			if(v[c]<x){
				a=c+1;
			}
	}
	return false;
}
int presente(int v[], int n, int x) {
	int index=-1;
	for(int i=0; i<n; i++) {
		if(v[i]=x) {
			index= i;
		}
	}
	if(index<=-1) {
		return -1;
	}
	else{
		return index;
	}
}
int presente(float v[], int n, float x){
	int index=-1;
	for(int i=0; i<n; i++) {
		if(v[i]=x) {
			index= i;
		}
	}
	if(index<=-1) {
		return -1;
	}
	else{
		return index;
	}
}
int minore(int v[], int n){
	int min=v[1];
	for(int i=0;i<n;i++){
		if(v[i]<min){
			min= v[i];
		}
	}
	return min;
}
float minore(float v[], int n) {
	int min=v[1];
	for(int i=0;i<n;i++){
		if(v[i]<min){
			min= v[i];
		}
	}
	return min;
}
int maggiore(int v[], int n) {
	int max=v[1];
	for(int i=0;i<n;i++){
		if(v[i]>max){
			max= v[i];
		}
	}
	return max;
}
float maggiore(float v[], int n) {
	int max=v[1];
	for(int i=0;i<n;i++){
		if(v[i]>max){
			max= v[i];
		}
	}
	return max;
}
int posizioneMinore(int v[], int n){
	int min=v[1]; int index_min;
	for(int i=0;i<n;i++){
		if(v[i]<min){
			index_min=i;
		}
	}
	return index_min;
}
int posizioneMinore(float v[], int n){
	int min=v[1]; int index_min;
	for(int i=0;i<n;i++){
		if(v[i]<min){
			index_min=i;
		}
	}
	return index_min;
}
int posizioneMaggiore(int v[], int n) {
	int max=v[1]; int index_max;
	for(int i=0;i<n;i++){
		if(v[i]>max){
			index_max= i;
		}
	}
	return index_max;
}
int posizioneMaggiore(float v[], int n) {
	int max=v[1]; int index_max;
	for(int i=0;i<n;i++){
		if(v[i]>max){
			index_max= i;
		}
	}
	return index_max;
}
void inverti(int v[], int n) {
	int c;
	for(int i=0; i<(n/2)-1; i++){
		c= v[i];
		v[i]=v[n-i];
		v[n-i]=c;
	}
}
void inverti(float v[], int n){
		int c;
	for(int i=0; i<(n/2)-1; i++){
		c= v[i];
		v[i]=v[n-i];
		v[n-i]=c;
	}
}
