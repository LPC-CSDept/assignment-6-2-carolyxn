//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
        int value = 1;
        for (int i = 0; i < n; i++)
                value *= 2;
        return value;
        // return n_th power number
}
double nthpowern(int n)
{
        float value = 1; 
        n *= (-1); 
        float negexp;
        for (int i = 0; i < n; i++)
        {
                value *= 2;
                negexp = 1/ value;
        }
        return negexp;
        // return n_th power number
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}