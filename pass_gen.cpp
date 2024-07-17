#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main(){
    srand(time(0));
    int a, random, choice ;
    string haslo;
    string haslotemp;
   cout << "Podaj długość hasła: ";
   cin >> a;
   cout << " 1 - małe litery \n 2 - małe i duże litery \n 3 - małe i duże litery z cyframi \n wybierz zabepieczenia:";
   cin >> choice;

  switch(choice){
    case 1:
        for (int i = 1; i <= a; i++)
        {
            haslo += rand() %  26 + 97;
        }
    break;
    case 2:
        for (int i = 1; i <= a; i++)
        {
            random = rand() % 2;
            switch(random){
                case 0:
                    haslo += rand() %  26 + 97;
                break;
                case 1:
                    haslo += rand() %  26 + 65;
                break;
            }
        }
    break;
    case 3:
        for (int i = 1; i <= a; i++)
        {
            random = rand() % 3;
            switch(random){
                case 0:
                    haslo += rand() % 26 + 97;
                break;
                case 1:
                    haslo += rand() % 26 + 65;
                break;
                case 2:
                    haslo += rand() % 9 + 48;
                break;
            }
        }
        break;
  }
   cout << "\ntwoje hasło to: " << haslo;
 
    return 0;
}