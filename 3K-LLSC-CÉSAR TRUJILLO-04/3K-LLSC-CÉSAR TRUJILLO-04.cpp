#include<iostream>

using namespace std;
int main() {

	float array[3][5];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "ingresa el valor en la posicion [" << i << "][" << j << "]: ";
			cin >> array[i][j];

		}
}	
for (int i = 0; i < 3; i++) {
	for (int j = 0; j < 5; j++) {
		cout << array[i][j] << "  ";

	}
	cout << endl << endl;
}




}