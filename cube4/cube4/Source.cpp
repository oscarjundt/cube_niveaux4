#include <iostream>

using namespace std;

int calcule(int x) {
	int res = 0;
	for (int i = 0; i <= 3; i++) {
		res = res + x;
	}
	return res;
}

void affichage(int aa, int y) {
	cout << "le cube de " << aa << " est: " << y << endl;
}

int main() {
	//declaration de la variable a
	int a;
	//je demande a l'utilisateur d'initialiser la variable a
	cin >> a;
	//j'appel et je met mas fonction dans la variable result
	int result = calcule(a);
	//j'appel la procedure d'affichage
	affichage(a,result);
}