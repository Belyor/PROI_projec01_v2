#include "Big_number.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    char key;
    cout << "Table convension press: T\n"
            "String convension press: S\n"
            "Exit press: Q\n";
    cin >> key;

    switch (key)
    {
    case 'T':
    {
        break;
    }

    case 'S':
    {
        string str_ulli_number;
        cout << "Gimmi numba I \n";
        cin >> str_ulli_number;
        cout << "\n Number: " << str_ulli_number << endl;

        Big_number number1(str_ulli_number);
        cout << "\n Number1: " << number1.get_string_number() << endl;

        cout << "Gimmi numba II \n";
        cin >> str_ulli_number;
        cout << "\n Number: " << str_ulli_number << endl;

        Big_number number2(str_ulli_number);
        cout << "\n Number2: " << number2.get_string_number() << endl;

        //number1 = number1 - number2;
        //cout << "\n Number1 after operator: " << number1.get_string_number() << endl;

        for (int i = 0; i < number1.get_vector_size(); i++)
        {
            cout << number1.get_vector_number()[i];
        }
        break;
    }
    case 'Q':
        return 0;
    }

    return 0;
}
