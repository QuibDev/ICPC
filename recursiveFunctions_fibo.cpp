#include <iostream>
using namespace std;

int fibo(int x);

int main(){
    int n;
    n = 6;

    int j = 0;
    for (int i=0; i<=n;i++){
        cout<< " ";
        cout << fibo(i) << " ";
        j++;
    }
}

int fibo(int x){
    if (x==0)
        return x;
    else if (x==1)
        return x;
    else 
        return (fibo(x-1)+fibo(x-2));    
}