#include <iostream>

using namespace std;
void stampaMenu() {
	cout << "0. Uscita" << endl;
	cout << "1. Creazione random del vettore" << endl;
	cout << "2. Stampa vettore" << endl;
	cout << "3. Aggiungi elemento" << endl;
	cout << "4. Visualizza massimo e minimo"<< endl;
}

void menu(int v[], int n) {
	int scelta, c;
	do {
		stampaMenu();
		cout << "Che opzione scelti?";
		cin >> scelta;
		switch(scelta){
			case 1:
				// qualcosa...
			case 2:
				// qualcos'altro...
			case 3:
				// qualcos'altro ancora...
			case 4:
				// BOH
			default:
				//la scelta non esiste;
		;}
	} while(scelta!=0);
}
int main(){
		
}
