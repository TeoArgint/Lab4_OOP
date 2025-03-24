#include <iostream>
#include "Dreptunghi.h"
using namespace std;

int main() {
    int option, lungime, latime, n;
    Dreptunghi d[10];
    while (true) {
        cout << "Meniu: \n"
                "1. Citire laturi dreptunghi: \n"
                "2. Afisare laturi: \n"
                "3. Exit\n";
        cout << "Optiunea aleasa este: ";
        cin >> option;
        if (option == 1) {
            cout << "Introduceti numarul de dreptunghiuri: \n";
            cin >> n;
            for (int i = 0; i < n; i++) {
                cout << "Introduceti lungimea dreptunghiului: ";
                cin >> lungime;
                d[i].setLungime(lungime);
                cout << "Introduceti latimea dreptunghiului: ";
                cin >> latime;
                d[i].setLatime(latime);
            }
        }
        else if (option == 2) {
            for (int i = 0; i < n; i++) {
                cout << "Dreptunghiul" << i << "are lungimea: " << d[i].getLungime() << "si latimea: " << d[i].getLatime() << endl;
            }
        }
        else if (option == 3) {
            break;
        }
        else
            cout << "Optiunea aleasa este invalida!\n"
                    "Incercati din nou";
    }
    return 0;
}