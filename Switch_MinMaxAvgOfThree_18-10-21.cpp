#include <iostream>
using namespace std;

int main() {

    int a,b,c,f,n,ch;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    f=1;

    while (f==1) {
        cout <<"\n1. Maximum \n2. Minimum\n3. Average\n4. Quit";
        cout<< "\n\t\t Choose one : ";
        cin>>ch;

        switch (ch) {
            case 1:
                if (a>=b and a>=c)
                    n=a;
                if (b>=a and b>=c)
                    n=b;
                if (c>=a and c>=b)
                    n=c;
                cout<<"\n\t\tMaximum of three Number is "<<n;
                break;
            case 2: 
                if (a<=b and a<=c)
                    n=a;
                if (b<=a and b<=c)
                    n=b;
                if (c<=a and c<=b)
                    n=c;
                cout<<"\n\t\tMinimum of three numbers is "<<n;
                break;
            case 3: n = (a+b+c)/3;
                cout<<"\n\t\tAverage of three numbers is "<<n;
                break;            
            case 4: f= 0;            
                cout<<"Quitting...";
                break;
            default:
                break;

    }    
    }

}