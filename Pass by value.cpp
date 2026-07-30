#include <iostream>
using namespace std;

int sum(int a , int b) {
    a=a+10;
    b=b+10;
    return a + b;
}

int main() {
    int a=10, b=20;
    cout<< "sum = "<<sum(a,b)<<endl;

    cout<<"a = "<<a<<endl; // pass by value, so a is not changed
    cout<<"b = "<<b<<endl;
    return 0;
}
