#include<iostream>
#include<fstream>

#include <string>
#include <cstdlib>

using namespace std;

void vremeime() {
    int ime, prezime, indeks;
    cout << "Vnesete vashi podatoci: " << endl;
    time_t tmNow = time(0);
    char* dt = ctime(&tmNow);
    cout << dt;
    cin >> ime >> prezime >> indeks;
    cout << endl;
}
int main(int argc, char* arg[])
{
    ifstream Vlez;
    string s;
    Vlez.open("prasanja.txt");
    while (getline(Vlez, s))
        cout << s << endl;
    Vlez.close();
    system("PAUSE");
    return EXIT_SUCCESS;
}