#include<iostream>
using namespace std;

int main(){
int n,i,j,k;
float A[10][11],c,x[10];

cout<<"Enter the number of variables:";
cin>>n;

cout<<"Enter the augmented matrix row-wise(including constants):\n";
for(i=1;i<=n;i++){
    for(j=1;j<=n+1;j++){
        cout<<"A["<<i<<"]["<<j<<"]:";
        cin>>A[i][j];
    }
}

// Gauss Jordan Elimination
for(j=1;j<=n;j++){
    for(i=1;i<=n;i++){
        if(i!=j){
            c=A[i][j]/A[i][j];
            for (k=1;k<=n+1;k++){
                A[i][k]=A[i][k]-c*A[j][k];
            }
        }
    }
}

cout<<"\nSolutions:\n";
for(i=1;i<=n;i++){
    x[i]=A[i][n+1]/A[i][i];
    cout<<"x"<<i<<"="<<x[i]<<endl;
}
return 0;
}
