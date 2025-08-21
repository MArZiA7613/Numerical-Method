#include <iostream>
#include <cmath>
# include <iomanip>

using namespace std;
# define EPSILON 0.001

// Define the function f(x)= x^4-x-12
double func(double x){
    return pow(x,4)-x-12;
}

void bisection(double a,double b){
    if (func(a)*func(b)>=0){
        cout << "You have not assumed right a and b"<<endl;
        return;
    }

    double c=a;
    while ((b-a)>=EPSILON){
        c=(a+b)/2;

        if (func(c)==0.0)
        break;
        else if (func(c)*func(a)<0)
        b=c;
        else
        a=c;
    }

    cout<<"The value of root is:"<<fixed<<setprecision(5)<<c<<endl;
}
int main() {
double a=1,b=2;
bisection(a,b);
return 0;
}