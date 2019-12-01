#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int random_min=0; int random_max=100;

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
