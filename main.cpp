#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double f(double x){
return cos(x)-x;
}

double derivative(double x){
double a =(-1.0*sin(x) -1);
return a;
}
int main()
{
    double x1;
    cout.precision(8);
    cout.setf(ios::fixed);
    cout<<" Enter the initial value: "<<endl;
    cin>> x1;
    double tolerance = pow(10, -8);
    double error, x ;
    int i=0;
    cout<< "x{i}   "<<"          "<< "x{1+i}"<< "           "<<" abs{1+x} -x{i}  "<<endl;
    do{
        x= x1- (f(x1)/derivative(x1));
        error=fabs((x-x1)/x);
        cout<<x<<"      "<<x1<<"         "<<fabs(x1-x)<<endl;
        x1=x;

    }
    while( error> tolerance);

    cout<< " Root found at: "<<x <<endl;

    return 0;
}
