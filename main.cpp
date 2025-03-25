#include <iostream>
#include "Dreptunghi.h"
#include "Test.h"
using namespace std;

int main() {
    teste();
    int option, lungime, latime, n;
    Dreptunghi d[11];
    while (true) {
        cout << "Meniu: \n"
                "1. Citire laturi dreptunghi: \n"
                "2. Afisare laturi: \n"
                "3. Exit\n";
        cout << "Optiunea aleasa este: ";
        cin >> option;
        if (option == 1) {
            cout << "Introduceti numarul de dreptunghiuri: ";
            cin >> n;
            if (n == 0)
                cout << "Incercati din nou!\n";

            for (int i = 1; i <= n; i++) {
                cout << "Introduceti lungimea dreptunghiului " << i << ":";
                cin >> lungime;
                cout << endl;
                cout << "Introduceti latimea dreptunghiului " << i << ":";
                cin >> latime;
                if (lungime == latime || lungime == 0 && latime == 0) {
                    cout << "Nu se poate crea un dreptunghi cu aceste lungimi/latimi!\n"
                            "Incercati din nou.";
                    break;
                }
                d[i].setLungime(lungime);
                d[i].setLatime(latime);
            }
        }
        else if (option == 2) {
            for (int i = 1; i <= n; i++) {
                cout << "Dreptunghiul " << i << " are lungimea: " << d[i].getLungime() << " si latimea:  " << d[i].getLatime() << endl;
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