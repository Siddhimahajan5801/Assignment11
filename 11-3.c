#include <stdio.h>
int prime (int);


int main(){ 
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    prime(num);

return 0; 
}

int prime(int x){
    int count=1;

    for (int i=2;i<=x/2;i++){
        if (x%i==0)
            count++;
     }


     if (count!=1 || x==0 || x==1)
        printf("It is not a prime number\n");
      else 
        printf("It is a prime number\n");
}