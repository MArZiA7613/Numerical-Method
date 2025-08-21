#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Define the function f(x)= x^4-x-12
float f(float x){
return pow(x,4)-x-12;
}

void secant(float x1,float x2,float E){
float n=0,xm,x0,c;
if(f(x1)*f(x2)<0){
    do{
        x0=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
        c=f(x1)*f(x0);
        x1=x2;
        x2=x0;
        n++;
        if(c==0)
            break;
        xm=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
    }
    while(fabs(xm-x0)>=E);

    cout<<fixed<<setprecision(5);
    cout<<"The value of root is:"<<x0<<endl;
    cout<<"No.of iterations="<<n<<endl;
} else{
cout<<"Cannot find a root in the given interval."<<endl;
}
}

int main(){
float x1=1,x2=2,E=0.0001;
secant(x1,x2,E);
return 0;
}
