#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

// Function f(x)= x^4-x-12
double func(double x){
return pow (x,4)-x-12;
}

void regulaFalsi(double a,double b,double epsilon){
if(func(a)* func(b)>=0){
 cout<<"Invalid initial interval.f(a)and f(b) must have opposite signs."<<endl ;
 return;
}
 double c=a;//root approximation
 int iteration=0;

 while(true){
    // RegulaFalsi formula to find the root
    c=(a*func(b)-b*func(a))/(func(b)-func(a));

    // If close enough to root,break
    if(fabs(func(c))<epsilon){
        break;
    }

    // Decide the side to repeat the steps
    if(func(c)*func(a)<0)
        b=c;
    else
        a=c;

    iteration++;
    if(iteration>1000){ // Safety break to prevent infinite loop
       cout<<"Method did not converge." <<endl;
       return;
    }
 }

 cout<<fixed<<setprecision(5);
 cout<<"The value of root is:"<<c<<endl;
 cout<<"Number of iterations="<<iteration<<endl;
}

int main(){
double a=1,b=2;
double epsilon=0.0001;
regulaFalsi(a,b,epsilon);
return 0;
}
