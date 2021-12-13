// Assignment_27-12-2021

#include <iostream>
using namespace std;


class Student{
    int id;
    string name;
    char gender;
    string branch;
    public:
        void getInfo();
        void dispInfo();        
};

void Student :: getInfo(){
    cout << "enter id: ";
    cin >> id;
    cout << "enter name: ";
    cin >> name;
    cout << "enter branch: ";
    cin >> branch;
};

void Student:: dispInfo(){
    cout << "\nid: " << id;
    cout << "\nname: " << name;
    cout << "\nbranch: " << branch;
};

class Number {
    int n;
    public:
    void readNum();
    void prime();
    void fact();
};

void Number :: readNum(){
    cout << "\nEnter the number: ";
    cin >> n;

    if (n < 1){
        cout << "\nPlease enter a valid number!";
    } else {
        prime();
        fact();
    }

}

void Number:: prime(){
    
    bool isPrime;

    isPrime = true;

    int f, i;
    f = 1;
    i = 2;

    while (isPrime) {                

            if (n%i == 0) {
                isPrime = false;                                
                break;
            }
            if (i >= n/2)
                break;
            i++;
        }

    if (isPrime){
        cout << "\n" << n << " is prime.\n";
    } else {
        cout << "\n" << n << " is not a prime.\n";
    }

};

void Number :: fact(){    
    int i;
    int f = 1;
    for (i=1;i<=n;i++)
        f = f*i;                            
    cout << n << "! = "<<f;    
}

int main(){
    Student s;
    s.getInfo();
    s.dispInfo();

    Number a;
    a.readNum();
};

