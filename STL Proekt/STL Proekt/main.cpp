//Valentin Stojanovski INKI947
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Covek {
    int redenBroj;
    string ime;
    float poeni;

    // metod za sortiranje
    bool operator < (const Covek& c) const {
        return poeni > c.poeni;
    }
};

int main() {
    // kreiranje na struktura Covek
    vector<Covek> luge = {
        {1, "Stefani", 45.5},
        {2, "Borjan", 38.0},
        {3, "Vasko", 40.2},
        {4, "Daniel", 50.0},
        {5, "Teodora", 9.8},
        {6, "Marina", 20.3},
        {7, "Goce", 29.5}
    };

    // pecatenje na pocetna sostojb a na vektorot
    cout << "****** Pochetna sostojba ******" << endl;
    for (Covek c : luge) {
        cout << c.redenBroj << ". " << c.ime << " - " << c.poeni << endl;
    }

    // sortiranje na vektorot po poeni
    sort(luge.begin(), luge.end());

    // pecatenje na sortiraniot vektor
    cout << endl << "****** Sortirana sostojba ******" << endl;
    for (Covek c : luge) {
        cout << c.redenBroj << ". " << c.ime << " - " << c.poeni << endl;
    }

    // zacuvuvanje na vektorot vo file
    ofstream out("INKI947-Valentin");
    if (out.is_open()) {
        for (Covek c : luge) {
            out << c.redenBroj << "," << c.ime << "," << c.poeni << endl;
        }
        out.close();
        cout << endl << "----- Vektort e zacuvan vo fajlot -----" << endl;
    } else {
        cout << endl << "----- Greshka pri otvoranje na fajlot -----" << endl;
    }

    return 0;
}
