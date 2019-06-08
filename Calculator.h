#ifndef CALCULATOR_H
#define CALCULATOR_H


class Calculator
{
    public:
        double a, b;
        char op;
        char s[20];

        Calculator();
        Calculator(double x, char oper, double y);
        Calculator(char str[]);

        double Computation();

    protected:

    private:
};

#endif // CALCULATOR_H
