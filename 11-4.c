#include <stdio.h>
int next_prime (int);


int main(){ 
    int num;
    printf("Enter a number : ");  //whole numbers
    scanf("%d",&num);

    next_prime(num);

return 0; 
}

int next_prime(int x){
    int count=0;

    if (x==0){x++;}   //since we have started our loop of j from 2

    for (int i=x+1; count=1 ; i++){
           count=0;

        for (int j=2; j<i; j++) { 
            if (i%j==0 ){
            count=1;
            break;
             }
        }
        if (count==0){
           printf("Next prime number is : %d",i);
           break;
        }
     } 
}

     