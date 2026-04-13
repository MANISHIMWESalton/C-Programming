#include<stdio.h>
 int main(){
    int total = 0;
    int marks[5] = {80,75,90,60,85};
    int max = marks[0];
    int min = marks[0];
    float average;
    for(int i=0;i<5;i++){
 total+=marks[i];
  average = total/5;
    }
    for(int i=1;i<5;i++){
        if(marks[i]>max){
            max = marks[i];
        }
        if(marks[i]<min){
            min = marks[i];
        }
       
       
    }
        printf(" The Total Marks: %d \n",total);
        printf(" The Maximum Marks: %d \n",max);
        printf(" The Minimum Marks:  %d \n",min);
        printf("The average marks : %.3f\n",average);

 }