#include <iostream>
using namespace std;

int main() {

    int a,b,c,f,ch;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    f=1;

    while (f==1) {
        cout <<"\n1. Add\n2. Sub\n3. Div\n4. Mul\n5. Mod\n6. Quit";
        cout<< "\n\t\t Your Choice : ";
        cin>>ch;

        switch (ch) {
            case 1: c = a+b;
                cout<<"\n\t\tAddition is "<<c;
                break;
            case 2: c = a-b;
                cout<<"\n\t\tSubtraction is"<<c;
                break;
            case 3: c = a/b;
                cout<<"\n\t\tDivision is"<<c;
                break;
            case 4: c = a*b;
                cout<<"\n\t\tMultiplication is"<<c;
                break;
            case 5: c = a%b;
                cout<<"\n\t\tModulus is"<<c;
                break;
            case 6: f= 0;            
                cout<<"Quitting...";
                break;
            default:
                break;

    }    
    }

}