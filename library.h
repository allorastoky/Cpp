#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomNM(int n, int m) {
	srand(time(NULL));
	int numb=n+rand()%((m+ 1)-n);
	return numb;
}
float randomNM_float(int n, int m) {
	 srand(time(NULL));
	 float numb=rand() % (m-n) + n + 1;
	 return numb;
}
int random0N(int n) {
	
	
	
	srand(time(NULL));
	int numb= (rand() % n)+1;
	return numb;
}

