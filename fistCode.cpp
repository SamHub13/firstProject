#include <bits/stdc++.h>
using namespace std;



string  q2(string &s){
    cout << "Enter your string : ";
    cin >> s;
    reverse(s.begin() , s.end());
    return s;
}

int main(){
    string s ;
    q2(s);
    cout << "your string is : " << s;
  return 0;
}
