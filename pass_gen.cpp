#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <fstream>

using namespace std;

int main(){
    srand(time(0));
    int a, random, choice ;
    string haslo;
    string haslotemp;
   cout << "Podaj dlugosc hasla: ";
   cin >> a;
   cout << " 1 - male litery \n 2 - male i duze litery \n 3 - male i duze litery z cyframi \n wybierz zabepieczenia: ";
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
  ofstream File("hasla.txt");
  File << haslo << endl;
  File.close();
   cout << "\n twoje haslo to: " << haslo << endl << "Haslo zostalo rowniez zapisane do pliku tekstowego" ;

    getchar();

    return 0;
}
