#include<stdio.h>
int main(){

    int number;
    do{
        printf("Enter positive number:") ;
        scanf("%d",&number);
        if(number<=0){
            printf("invalid! try again \n");
        }
    }
    while(number<=0);
    
    printf(" you entered %d \n",number);

    int count = 1;
    while(count<=5){
        printf("Counted number: %d \n",count);
        count++;
    }
    int total = 0;
    int number2;
    printf("Enter 5 numbers:");
    for(int i = 1;i<=5;i++){
        scanf("%d",&number2);
        total += number2;
    }
    printf(" The Total number = %d \n",total);

// Sentinel loop
    int number1;
    int sum = 0;
    printf("Enter number: ");
scanf("%d",&number1);
while (number1 != -1)
{
    sum+=number1;
    scanf("%d",&number1);
}
printf("The Sum = %d\n",sum);

    return 0;
}