#include <bits/stdc++.h>
#define EPSILON 0.0001

using namespace std;

// Function Function f(x)= x^4+5x-15
double func(double x){
return pow(x,4)+5*x-15;
}

// Derivative f'(x)= 4x^3+5
double derivFunc(double x){
return 4*pow(x,3)+5;
}

// Newton-Raphson implementation
void newtonRaphson(double x){
double h=func(x)/derivFunc(x);

while(abs(h)>=EPSILON){
    h=func(x)/derivFunc(x);
    x=x-h;
}

cout<<fixed<<setprecision(5);
cout<<"The value of root is:"<<x<<endl;
}

int main(){
double x0=1.5;  // Initial guess(choose close to root)
newtonRaphson(x0);
return 0;
}
