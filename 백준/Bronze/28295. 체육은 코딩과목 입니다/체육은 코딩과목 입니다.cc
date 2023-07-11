#include <iostream>
using namespace std;int main(){char d[4]={'N','E','S','W'};int c=0,i,x;for(i=0;i<10;i++){cin>>x;c=(c+x)%4;}cout<<d[c];}