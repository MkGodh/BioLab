#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>


int main(){

        using namespace std;

        setlocale(LC_ALL, "Rus");

        unsigned long long bacteria;
        int antibiotic;
        cout << "Введите колличество бактерий: "; cin >> bacteria;
        cout << "Ввелите колличество антибиотика: "; cin >> antibiotic;
        int rezBio = antibiotic * 10; // 10
        int hours = 1;

        do {
            bacteria = (bacteria * 2) - rezBio;
            cout << "После " << hours << " часа бактерий осталось " << bacteria << "\n";
            rezBio--;
            hours++;
            if (bacteria < rezBio / 2) {
                bacteria *= 0;
                cout << "После " << hours << " часа бактерий осталось " << bacteria << "\n";
                break;
            }

        } while (bacteria > 0 && rezBio > 0);
   }

