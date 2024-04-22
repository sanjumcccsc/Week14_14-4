#include "SomeRecurisveAlgos.h"

//****************************************************
// Definition of factorial. A recursive function to  *
// calculate the factorial of the parameter, num.    *
//****************************************************
long double SomeRecursiveAlgos::factorial(long double num)
{
    if (num == 0 || num == 1)  //base case
        return 1;
    else
        return num * factorial(num - 1);
}

int SomeRecursiveAlgos::gcdEuler(int x, int y)
{
    if ((x % y) == 0)
    {
        return y;
    }
    else
    {
        return gcdEuler(y, x % y);
    }

}

int SomeRecursiveAlgos::fib(int n)
{
    if (n <= 0)        //base case
        return 0;
    else if (n == 1)   //base case
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
