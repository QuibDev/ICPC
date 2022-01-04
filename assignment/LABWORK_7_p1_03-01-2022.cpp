#include<iostream>
#include<math.h>
using namespace std;

int fact (int x);



int main(){
    int i;
    int n = 3;
    float sum = 0;
    float k;
    float y = -1;

    for (i=0; i<n; i++){
        k = (float) (pow(i,i) / fact(i));
        sum = sum + y*k;
        y = -y;        
    }

    cout << "\n\n\n";
    cout << "\nsum is: " << sum;
    cout << "\n\n\n";

}

int fact (int k){
    int f = 1;
    if (k==0){
        return f;
    } else {
        f = k*fact(k-1);
    }
    return f;
}