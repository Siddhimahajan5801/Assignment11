#include <stdio.h>
int hcf(int,int);

int main(){ 
   int num1,num2;
   printf("Enter two numbers whose hcf is to be calculated :  ");
   scanf("%d %d",&num1,&num2);

   hcf(num1,num2);    
return 0; 
}

int hcf(int n1,int n2){
      int hcf=1;
    for (int i=1 ; i<=n1 || i<=n2 ; i++){
         if (n1%i==0 && n2%i==0){
            hcf=i;
         }  
    }
    printf("HCF of %d and %d is %d \n",n1,n2,hcf); 
}