//Valentin Stojanovski INKI947
#include <cstdlib>
#include <iostream>
#include<stdio.h>

using namespace std;

void f1(char* p) {
	*p = '?';
	p++;
	*p = '!';
	p++;
	*p = '?';
}
void f2(char* pok) {
	*pok = '0';
	pok++;
	*pok = ';';
	pok++;
	*pok = '-';
	pok++;
	*pok = ')';
}
int main() {
	char ime[] = "Valentin";
	char prezime[] = "Stojanovski";
	printf("\n%s \n", ime);
	f1(ime);
	printf("\n%s \n", ime);
	printf("\n%s \n", prezime);
	f2(prezime);
	printf("\n%s \n", prezime);

	system("PAUSE");
	return EXIT_SUCCESS;
}