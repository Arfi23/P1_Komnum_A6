#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float f(float x) // persamaan : f(x) = x^3 + 11x^2 -16x - 320
{
    float y;
    y = pow(x,3) + 11*(pow(x,2)) - (16*x) - 320;
    return y;
}

int main(int argc, char const *argv[])
{
    float a;
    cin>>a;

    cout<<fixed;
    cout<<setprecision(2);
    
    cout<<"hasilnya ketika x bernilai "<<a<<" yaitu "<<f(a)<<endl;
    return 0;
}
