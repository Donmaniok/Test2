//
// Created on HP on 19.03.2020.
// New 20.02    v2.0
//
#include <iostream>
#include <string>
/// #include <zconf.h>          //  sleep()

using namespace std;
/**---------------------------          0. Void    ----------------------------------------**/
void menu_1();
void menu_2();
void menu_3();

int main() {
/**---------------------------          1. Main    ----------------------------------------**/
    int menu;

    cout << "Standordowo:\t\t\t Hello, World!" << endl << "\t\tCzesc!" << endl
<< "\"Wpisz\" (cyfre) gdzie chcesz przejsc: " << endl << endl;


cout << endl << "\t1. Liczba i napis\n"
        "\t2. Wyswietl typy danych\n"
        "\t3. Wczytaj n zmiennych\n"
        "\t 0 Wyjscie z programu\n"<< endl;
cout << "\t\t";
    More:
cin >> menu;


    switch (menu){
        case 0:
            break;
        case 1:
            menu_1();
            break;
        case 2:
            menu_2();
            break;
        case 3:
            menu_3();
            break;
        default:
            cout << "\n\n\tWprowadz CYFRE\n";
            goto More;
    }

    cout << "\n\t\tDo zobaczenia!";
    return 0;
}

void menu_1(){
    int liczba;
    char znaki;
    string imie;

    cout << "\n\n\t\tWpisz znak: " << endl;
    cin >> znaki;

    cout << "\n\n\t\tWpisz dowolny ciag znakow: " << endl;
    cin >> imie;

    cout << "\n\n\t\tWprowadz liczbe: " << endl;
    cin >> liczba;

    cout << "Wprowadzono:" << endl;

    cout << "\tZnak: \t\t" << znaki << "\n\tLiczbe: \t" << liczba << endl;
    cout << "\tZdanie: \t" << imie << "." << endl;

}

void menu_2(){
    cout << "\n\t\t\tTYPY DANYCH:: " << endl << endl;
    cout << "\n\tInt \t --> \tliczby całkowite"
            "\n\tFloat \t --> \tliczby zmiennoprzecinkowe"
            "\n\tDouble \t --> \tliczby zmiennoprzecinkowe"
            "\n\tBoolean\t --> \tprawda / fałsz"
            "\n\tChar\t --> \tjeden znak"
            "\n\tString\t --> \tciąg znaków"
            "\n\nKoniec.";
}

void menu_3(){

    int ilosc;
    int liczba_1, liczba_n;

    cout << "Ile liczb chcesz wczytac ?" << endl;
    cin >> ilosc;

    cout << "Wpisz " << ilosc << " liczb." << endl;
    cin >> liczba_1;
    cout << "liczba: " << liczba_1 << endl;

    for (int i = 1; i < ilosc; i++) {
        cin >> liczba_n;
        cout << "liczba: " << liczba_n << endl;
        if (liczba_1 < liczba_n){
            liczba_1 = liczba_n;
        }
    }
    cout << "podales: " << ilosc << " liczb.\tNajwieksza z nich to:\t" << liczba_1 << endl;
}