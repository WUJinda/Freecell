
#include <iostream>
using namespace std;




int main() {

	int alea[13][8]{ 0 };



	for (int i = 0; i < 52; i++) {
		alea[i / 8][ i % 8] = i;//tableau[tab[i] % 13][tab[i] - 13 * tab[i] % 13];			//la case suivante d'alea à initialiser reçoit la "tab[i]"eme carte triée moralement
	}

	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 8; j++) {
			cout << alea[i][j]<<"   ";
		}
		cout << endl;

	}


	int c;
	while (true) { c = 1; }
}

