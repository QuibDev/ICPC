#include<iostream>
using namespace std;


int fact (int k){
    int f = 1;
    if (k==0){
        return f;
    } else {
        f = k*fact(k-1);
    }
    return f;
}

int main(){
    int x;
    x = fact(5);
    cout << x;
}
