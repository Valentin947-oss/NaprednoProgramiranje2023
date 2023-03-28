//Valentin Stojanovski INKI947
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
	char pole[23];
	strcpy(pole, "Ti Si Problem - Nokaut");
	char* pokpol = &pole[0];
	cout << "Pesna: " << pole << endl; // cela sodrzina
	cout << "Cela sodrzina na pesnata:" << pokpol << endl; // cela sodrzina
	cout << "Pocetna pozicija= " << *pokpol << endl; // vrednost pocetna pozicija
	cout << "adresa na pocetokot :" << (int)pokpol << endl; // adresa
	pokpol += 15; // pocetok presten za 17 pozicii
	cout << endl;
	cout << "*************************" << endl;
	cout << endl;
	cout << "pokpol+15 :" << endl;
	cout << "Presmetuvanje do ime na izveduvach" << pokpol << endl; // pocetok po 17
	cout << "Sodrzina po presmetan pocetok :" << *pokpol << endl;
	cout << "adresa od koja pocnuva segashnata sodrzina :" << (int)pokpol << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}