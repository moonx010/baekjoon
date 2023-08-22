#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, p, x, y;
    cin>>a>>b>>c>>d>>p;
    x = a * p;
    if(c < p)
        y = b + ((p - c) * d);
    else
        y = b;
    cout<<min(x, y);
    return 0;
}