#include <stdio.h>
void print_prime(int,int);

int main(){ 
    int num1,num2;
    printf("Enter two numbers : \n");
    scanf("%d %d",&num1,&num2);

    print_prime(num1,num2);

return 0; 
}

void print_prime(int n1,int n2){
    int count=0;

    printf("Prime numbers between %d and %d is : \n",n1,n2);

    for (int i=n1+1 ;i<n2;i++){
        count=0;

    for (int j=2;j<=i/2;j++){
        if (i%j==0){
        count++;
        break;
        }  
    }

     if ((count==0) && i!=1){
      printf("%d ",i);
    }

    }

}