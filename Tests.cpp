
#include <iostream>
using namespace std;




int main() {

	int alea[13][8]{ 0 };



	for (int i = 0; i < 52; i++) {
		alea[i / 8][ i % 8] = i;//tableau[tab[i] % 13][tab[i] - 13 * tab[i] % 13];			//la case suivante d'alea � initialiser re�oit la "tab[i]"eme carte tri�e moralement
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

