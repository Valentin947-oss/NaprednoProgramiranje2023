#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); //seed random number generator
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << "Pogodi go pbrojot\n\n";

	do
	{
		cout << "Pogodi go brojot megu 1 i 100: ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Visoko!\n\n";
		else if (guess < num)
			cout << "Nisko!\n\n";
		else
			cout << "\nGo Pogodi brojot vo! " << tries << " obidi!\n";
	} while (guess != num);

	return 0;
}
