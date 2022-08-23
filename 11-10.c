#include <stdio.h>
int fact(int);

int main(){ 
    int s=0;

    for (int i=1; i<=5 ;i++){
        s=s+(fact(i)/i);
    }

    printf("The sum is : %d ",s);
    
return 0; 
}

int fact(int x){
  int factorial=1;

    if (x==0)
    return factorial;
    
    else {
         for (int i=1;i<=x;i++){
            factorial=factorial*i;
         } 
       return factorial;
    }
}
