#include<iostream>
using namespace std;

int main(){
     
    float num1,num2,result;
    
    int choice;
    do  
    {
        cout<<"\n1-Addition"<<endl;
        cout<<"2-Subtraction"<<endl;
        cout<<"3-Multiplication"<<endl;
        cout<<"4-Division"<<endl;
        cout<<"5-Exit"<<endl;

        cout<<"Enter your choice"<<endl;
        cin>>choice;

        if(choice<=4 && choice>=1){ 
        cout<<"Enter any two numbers";
        cin>>num1>>num2;
        }

        switch(choice)
        {
            case 1: result = num1 + num2;
                    cout<<"Result = "<<result<<endl;
            break;

            case 2: result = num1 - num2;
                    cout<<"Result = "<<result<<endl;
            break;

            case 3: result = num1*num2;
                    cout<<"Result = "<<result<<endl;
            break;

            case 4: result = num1 / num2;
                    cout<<"Result = "<<result<<endl;
            break;

            case 5:
                     return 0;

            default:
                    cout<<"Invalid choice"<<endl;
                    break;
        }
    }while(choice!=5);
    
    return 0;
}
