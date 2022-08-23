#include <stdio.h>
int factorial(int);
int ncr(int,int);
void pascal_tri(int);

int main(){
    int n;
    printf("Enter the no. of rows : ");
    scanf("%d",&n); 

    pascal_tri(n);

return 0; 
}


int factorial(int n){
    int f;

    for (f=1;n>1;n--)
    f=f*n;
    return f;
}

int ncr (int n,int r){
    return factorial(n)/ (factorial(n-r) * factorial(r));
}


void pascal_tri(int x){
    int i,j ;

    for ( i=0; i<x; i++){
        for ( j=0; j<=x-i; j++ )
        printf("  ");

        for ( j=0; j<=i; j++)
        printf(" %3d",ncr(i,j));

        printf("\n");
    }
}