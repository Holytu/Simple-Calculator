#include <iostream>
#include <Calculator.h>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    /// x + y | x * y | x / y | x - y
    ///
    cout<<"Calculation\n";
    int x, y;
    char op;
    char str[20];

    while(true)
    {
        /*if(scanf("%d %c %d", &x, &op, &y))
        {
            Calculator  c(x, op, y);
            double ans = c.Computation();

            cout<<ans<<"\n";
        }*/

        scanf("%s",&str);

        Calculator c(str);
        double ans = c.Computation();
        cout<<ans<<"\n";
    }

    return 0;
}
