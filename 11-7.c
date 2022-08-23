#include <stdio.h>
void fibo_series(int);

int main(){ 
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);

    fibo_series(n);

return 0; 
}

void fibo_series(int x){
    int n1=0,n2=1,n3=0;

    printf("Fibonacci series is:\n");
    printf("%d  %d ",n1,n2);

    
    for (int i=2;i<x;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;

 printf(" %d ",n3);
     }
}