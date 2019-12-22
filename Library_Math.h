#include <iostream>
#include <conio.h>

using namespace std;

int somma(){
	int n; int sum;
	do{
		cout << "Inserire l'addendo: ";
		cin >> n;
		sum += n;
		system("CLS");
		cout << "risultato parziale: " << sum << endl << endl;
	} while ();
	system("CLS");
	cout << "La somma totale corrisponde a: "<< sum;
}
