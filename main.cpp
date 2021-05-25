#include <iostream>
#include <cmath>
#include "main.h"

using namespace std;

int main() {
    complex a, b, result;

    a.Num_1 = 3;
    a.Num_2 = 3;
    b.Num_1 = 4;
    b.Num_2 = 4;

    short Function;

cout <<"Input 0(Sum) or 1(sub) or 2(multiply) or 3(divided): ";
cin >> Function;
cout <<"Output: ";

    switch (Function) {
        case 0:
            result = a + b;
            cout << result;
            break;
        case 1:
            result = a - b;
            cout << result;
            break;
        case 2:
            result = a * b;
            cout << result;
            break;
        case 3:
            result = a/b;
            cout << result;
            break;
    }
         return 0;
}
