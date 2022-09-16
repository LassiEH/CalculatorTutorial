#include "Calculator.h"

double Calculator::Calculate(double firstNum, char operation, double secondNum)
{
    switch (operation)
    {
    case '+':
        return firstNum + secondNum;
    case '-':
        return firstNum - secondNum;
    case '*':
        return firstNum * secondNum;
    case '/':
        return firstNum / secondNum;
    default:
        return 0.0;
    }
}
