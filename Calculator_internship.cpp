# include <iostream>
using namespace std;

int main(){
    double num1,num2;
    char operation;

    cout<<"Enter the First number: ";
    cin>>num1;
    cout<<"Enter the Second number: ";
    cin>>num2;
    cout<<"Select Operation: 1 for Addition(+) 2 for Subtraction(-) 3 for Multiplication(*) 4 for Division(/): \n";
    cin>>operation;

    switch (operation){
    case '1' :
    cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
        break;
    case '2' :
    cout<<"Substraction of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;
        break;
    case '3' :
    cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
        break;
    case '4' :
        if(num2==0){
            cout<<"Error! Division by zero is not possible"<<endl;
        }
        else
    cout<<"division of "<<num1<<" and "<<num2<<" is "<<num1/num2<<endl;
        break;
    default:
    cout<<"Invalid operation! Please enter a valid operation number"<<endl;
        break;
    }
    return 0;
}