#include <stdio.h>
void func(int);

int main(){ 
    int n;
    printf("Enter the value of N :");
    scanf("%d",&n);

    func(n);

return 0; 
}

void func (int num){
    printf("The first %d natural numbers are : \n",num);
    for (int i=1; i<=num ;i++){
        printf("%d ",i);
    }
}