// This program demonstrates a recursive function 
// to calculate the factorial of a number.  
#include <iostream>
#include "SomeRecurisveAlgos.h"
using namespace std;

int main()
{
    long double number;
    SomeRecursiveAlgos s;
    int x = -1, y = -1;

   cout << "Enter an integer value and I will display\n";
   cout << "its factorial: ";
   cin  >> number;
   cout << "The factorial of " << number << " is ";
   cout << s.factorial(number)   << endl;

   cout << "\n\nTesting Euclid's gcd algo...\n";
   cout << "Enter two integers: ";
   cin >> x >> y;
   cout << "GCD of " << x << " and " << y << " is: "
       << s.gcdEuler(x, y);

   cout << "\n\nThe first 10 Fibonacci numbers are:\n";
   for (int x = 0; x < 10; x++)
       cout << s.fib(x) << " ";
   cout << endl;
   return 0;
}