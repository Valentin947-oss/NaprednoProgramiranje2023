#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string filename;
    cout << "Enter filename: ";
    cin >> filename;
    cin.ignore(); // Ова се прави за да се игнорира претходниот enter кога корисникот внесува име на фајлот.

    // Отворање на фајлот за додавање на текст
    ofstream outFile(filename, ios::app);

    if (!outFile)
    {
        // Фајлот не може да се отвори
        cerr << "Error: Could not open file for writing." << endl;
        return 1;
    }

    string textToAdd;
    cout << "Enter text to add to file: ";
    getline(cin, textToAdd);

    // Додавање на текст во фајлот
    outFile << textToAdd << endl;

    // Затварање на фајлот
    outFile.close();

    return 0;
}
