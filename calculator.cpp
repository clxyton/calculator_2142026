#include "calculator.h"

//My style is always going to be the same, the scope first, then the {} in a new line, and then syntax in a new line, my text editor automatically formats it, thx lazyvim!
//also camelCase for the win
//and it's now 01:33 NYC, NY/ Atlanta:Morrow, Georgia time as of writing this
//ugh

double Calculator::add(double num1, double num2) //addition
{
  return num1 + num2;
}

double Calculator::subtract(double num1, double num2) //subtraction
{
  return num1 - num2;
}

double Calculator::multiply(double num1, double num2)//multiplication
{
  return num1 * num2;
}

double Calculator::divide(double num1, double num2)//division
{
  if (num2 == 0)
  {
    throw std::invalid_argument("Division by zero! (The allowed equation is a/b for b!=0). Try again!"); //unless you consider L'Hore's law/rule/theory/fingering
  }
  return num1 / num2;
}

double Calculator::sqrt(double num1)//square root
{
  if (num1 < 0)
  {
    throw std::invalid_argument("Square root of a negative number (sqrt(-a) will result in a complex result, this operation is for postive real numbers,\n to get the complex result, remove the negative sign and retry, once you get your result, append i, the imaginary unit to it.\n");
  } //because sqrt(-1)=i, the imaginary unit, and sqrt(-2)=something*i, not gonna lie, imaginary numbers dont seem that hard, (until i get in fkn calculus and trig and god knows what else, and then im shittin my pants because wtf is that) 
  else 
  {
    return std::sqrt(num1);
  }
}

//i maybe (maybe, MAYBE) add log and ln and log base a for a is any number in the real numbers, and that's if i ever get the motivation to do that, maybe trig functions too
//this has to be the best calculator, so maybe i'll add graphing, especially for my homework, where i have to convert standard to vertex and then solve for roots
//well not anymore because weve moved on from that and are on exponential equations... shit.
