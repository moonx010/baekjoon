#include<iostream>
#include<string>
using namespace std;

int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    string number1=to_string(A)+to_string(B);
    string number2=to_string(C)+to_string(D);
    long long answer=stoll(number1)+stoll(number2);

    cout << answer;
    return 0;
}