#include "calculator.h"

int main()
{
  double num1, num2; //declare num1 and num2 as doubles
  char operation; //declare operation as a char
  Calculator calc; //make an instance of calculator class...

  std::cout << "Welcome to this calculator, enter first number:\n";
  std::cin >> num1;

  std::cout << "Enter operator (+,-,*,/,~):\n";
  std::cin >> operation;

  std::cout << "Enter second number:\n";
  if (operation != '~')
  {
    std::cin >> num2;
  }

  try //this was hell and three times more intense than the seventh layer
  {
    double result;
    std::string resultmsg = "The result is ";
    switch (operation) {
      case '+':
        result = calc.add(num1, num2);
        break;
      case '-':
        result = calc.subtract(num1, num2);
        break;
      case '*':
        result = calc.multiply(num1, num2);
        break;
      case '/':
        result = calc.divide(num1, num2);
        break;
      case '~':
        result = calc.sqrt(num1);
        break;
      default:
        std::cout << "Invalid operator\n";
        return 1;
        std::cout << resultmsg << result;
    }
    std::println("{} -> {}\n", resultmsg, result);
  }
  catch (const std::invalid_argument& e) //for the just in case something else goes weirdly awry
  {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}
