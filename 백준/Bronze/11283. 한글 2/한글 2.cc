#include <iostream>
using namespace std;

int main(){
	string S;
	int n;
	cin>>S;
	n = ((S[0]&255)-234)*4096+((S[1]&255)-176)*64+(S[2]&255)-127;
	cout<<n;
}