// CalculatorTutorial.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;
#include "Calculator.h"

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    
    cout << "Calculator Console App" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
   
    Calculator c;
    while (true) {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0) {
            cout << "Division by 0 exception" << endl;
            continue;
        }
        else{
            result = c.Calculate(x, oper, y);
        }
        cout << "Result is: " << result << endl;

    }
    return 0;
}


