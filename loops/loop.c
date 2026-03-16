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
    return 0;
}