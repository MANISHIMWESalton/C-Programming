#include<iostream>
using namespace std;
int main(){
    //Addition
    int number1,number2,number3;
    cout<<"Enter three numbers:";
    cin>> number1>>number2>>number3;
    int sum = number1+number2+number3;
    cout<<"Addition: "<<sum<<endl;
    
   //Substruction
    int balance = number1-number2-number3;  
    cout<<"Substruction: "<<balance<<endl;

     //Multiplication
    int multiple = number1*number2*number3;
    cout<<"Multiplication: "<<multiple<<endl;
    //Division
    int division = number1/number2/number3;
    cout<<"Division: "<<division<<endl;

    //Modulus
    int modulus = number1%number2%number3;
    cout<<"Remainder: "<<modulus<<endl;



// lab activity Add two numbers

int number1 ,number2;
int result;
cout <<"Enter Two numbers";
cin>>number1>>number2;
result = number1+number2;
cout << "The sum is: \n "<< result<<endl;
//area of rectangle
int length, width;
int area;
cout<<"Enter the length and width: ";
cin>>length>>width;
area = length*width;
cout<<"The area of rectangle is : " << area << "cm"<<endl;

    return 0;

}