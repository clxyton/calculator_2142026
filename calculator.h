#ifndef CALCULATOR_H
#define CALCULATOR_H

//hi i am doing this because i hate myself and would want to 0/0 myself.

//including necessary headers
#include <iostream>
#include <stdexcept>
#include <string>
#include <cmath>
#include <print>

//creating a Calculator class //for Calculator::anything//
class Calculator
{
  public:
    double add(double num1, double num2);
    double subtract(double num1, double num2);
    double multiply(double num1, double num2);
    double divide(double num1, double num2);
    double sqrt(double num1);
};

#endif //CALCULATOR_H
