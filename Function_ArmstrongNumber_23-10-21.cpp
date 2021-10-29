#include <iostream>  
using namespace std;

// Code for armstrong numbers

void isArmStrongNumber(int n);

int main()  
{      
    int n;
    cout <<"Enter the number ";
    cin >>n;

    isArmStrongNumber(n);

    cout <<"\n\n\n";
    return 0;  
}  

void isArmStrongNumber(int n) {

    int r,sum=0,temp; 
    temp=n;    

    while(n>0)    
    {    
        r=n%10;    
        sum=sum+(r*r*r);    
        n=n/10;    
    }    
    if(temp==sum)    
        cout<<"Armstrong Number."<< endl;    
    else    
        cout<<"Not Armstrong Number."<< endl;   
    
}

