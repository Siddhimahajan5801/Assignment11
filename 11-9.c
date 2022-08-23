#include <stdio.h>
int square(int);

int main(){ 
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);

  int s=square(n);  
      printf ("\nSquare of %d is %d ",n,s) ; 

return 0; 
}

int square (int x){
    return x*x;
}