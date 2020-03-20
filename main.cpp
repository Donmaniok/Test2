//
// Created on HP on 19.03.2020.
//
#include <iostream>
#include <cstdlib>


///             ?????????????????????
/// #define EXIT    main(goto koniec);
///



using namespace std;

void menuu();
void menu_1();


int main() {

    int menu;


    cout << "Standordowo:\t\t\t Hello, World!" << endl << "\t\tCzesc!" << endl
<< "\"Wpisz\" (cyfre) gdzie chcesz przejsc: " << endl << endl << "\t\t";      cin >> menu;

//  1,2,3,...|

    cout << "\n\t\tDo zobaczenia!";


    return 0;
}

/*
void menu() {
            int nr_menu = atexit();
//char quit;
//    for(; ;){
//        quit = getchar();
//        if (quit == '')
//    };

                    if (nr_menu != 113){
                        return (0);
                    }

    cout << "Wpisz nr." << endl;
    cout << "\t1. AaA \t2. BbB \t3. CcC" << endl;
    cout << "\t\tNacisnij 0, aby wyjsc z programu." << endl;    ///dodac do VOIDA !!!!
Try:
    cin >> nr_menu;

    switch (nr_menu){
        case 1:
            cout << "numer jeden 1.";
            menu_1();
            break;
        case 2:
            cout << "dwa = yyyyy";
            break;
        case 3:
            cout << "TRZY" << endl;
            break;

        case 0:
            cout << endl; system ("pause");
            break;
        default:
            cout << "Wprowadzona wartosc: " << nr_menu << " jest nieprawidlowa.\n Sprobuj jeszcze raz!\n\n";
            goto Try;
    }
}

void menu_1(){
    cout <<"\n\n\t\taaaaaaaaaaaa\n";
}
 */             /// ..To Do !