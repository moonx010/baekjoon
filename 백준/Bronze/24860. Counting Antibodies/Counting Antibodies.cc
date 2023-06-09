#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int vk, jk, va, ja, vh, dh, jh;
  cin >> vk >> jk >> va >> ja >> vh >> dh >> jh;
  long long int lightChainK = vk * jk;
  long long int lightChainA = va * ja;
  long long int heavyChain = vh * dh * jh;
  cout << heavyChain*(lightChainA + lightChainK);
}