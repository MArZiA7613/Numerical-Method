#include <iostream>
#include <iomanip>
 using namespace std;

 int main(){
 int n;
 cout<<"Enter number of variables:";
 cin>>n;

 float A[10][10],x[10],ratio;

 cout<<"Enter augmented matrix coefficients row-wise:\n";
 for (int i=0;i<n;i++){
   for(int j=0;j<=n;j++) {
    cout<<"A["<<i+1<<"]["<<j+1<<"]:";
    cin>>A[i][j];
   }
 }

 //Forward elimination to convert matrix to upper triangle form
 for(int i=0;i<n-1;i++){
    for(int j=i+1;j<=n;j++){
      ratio=A[j][i]/A[i][i];
      for(int k=i;k<=n;k++){
        A[j][k]=A[j][k]-ratio*A[i][k];
      }
    }
 }

// Back substitution to solve for variables
 for(int i=n-1;i>=0;i--){
    x[i]=A[i][n];
    for(int j=i+1;j<n;j++){
        x[i]=x[i]-A[i][j]*x[j];
    }
    x[i]=x[i]/A[i][i];
 }
 // Display solutions
 cout<<fixed<<setprecision(5);
 cout<<"\nSolution:\n";
 for(int i=0;i<n;i++){
    cout<<"x"<<i+1<<"="<<x[i]<<endl;
 }
 return 0;
 }
