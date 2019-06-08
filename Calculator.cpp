#include "Calculator.h"
#include <math.h>
#include <cstdio>
#include <cstdlib>

Calculator::Calculator(double x, char oper, double y)
{
    a = x;
    b = y;
    op = oper;
}
Calculator::Calculator(char str[])
{
    int i = 0;
    a = 0; b = 0;

    while (str[i] != '\0')
    {
        if(str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
        {
            op = str[i];
            i++;
        }
        else if(str[i] == 's')/// sqrt, sin
        {
            i++;
            if(str[i] == 'q')
            {
                while(str[i]!='(')
                {
                    i++;
                }
                op = 'q';
            }
            else if(str[i] == 'i')
            {
                while(str[i]!='(')
                {
                    i++;
                }
                op = 'i';
            }

        }
        else if(str[i] == 'c')/// cos
        {
            op = 'c';
            i++;
        }
        else if(str[i] == 't')/// tan
        {
            op = 't';
            i++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            double x = 0;
            x = (str[i] - '0' );
            i++;

            while(str[i] >= '0' && str[i] <='9')
            {
                x = x * 10.0;
                x = x + (str[i] - '0' );
                i++;
            }
            if(a == 0)
            {
                a = x;
            }
            else
            {
                b = x;
            }
        }
        else
        {
            i++;
        }
    }
}
double Calculator::Computation()
{
    switch(op)
    {

        case '+':
            //printf("+++++\n");
            //printf("a = %f, b = %f\n",a, b);
            return a+b;
            break;
        case '-':
            return a-b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return a/b;
            break;
        case 'q':
            return sqrt(a);
            break;
        case 'i':
            return sin(a);
            break;
        case 'c':
            return cos(a);
            break;
        case 't':
            return tan(a);
            break;

        default :
            printf("%c\n", op);
            break;
    }
}
