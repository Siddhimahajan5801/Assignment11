#include<stdio.h>
int lcm(int ,int);

int main(){
    int n1,n2;

    printf("Enter two numbers whose LCM is to be calculated:\n");
    scanf("%d %d",&n1,&n2);

    lcm(n1,n2);
}

int lcm(int num1,int num2){
  int max;
  max=(num1>num2)? num1:num2;

    while (1){
        if (max%num1==0 && max%num2==0){
        printf("The LCM of %d and %d is %d\n",num1,num2,max);
        break;
    }
      max++;
    }

    return 0;
}