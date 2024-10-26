
#include <iostream>
using namespace std;

int main() 
{
	int number;

	cout << "Podaj liczbe uczestnikow: ";
	cin >> number;

	if (number % 8 == 0) {
		cout << "Kazdy z uczestnikow dostal po jednym kawa³ku pizzy." << endl;
	}
	else {
		cout << "Kazdy z uczestnikow dostal po jednym kawalku pizzy. Zostalo tyle kawalkow: " << number % 8  << endl;

	}
	return 0;
}

