#include "calculator.h" // include header file

// Add
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

// Substraction description
int Calculator::Sub (double a, double b)
{
        return Add (a, -b);
}

// Multiplication description
int Calculator::Mul (double a, double b)
{
        return a * b + 0.5;
}
