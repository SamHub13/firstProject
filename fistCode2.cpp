#include <bits/stdc++.h>
using namespace std;


void Userin(vector<int> &in){
    while(true){
            int num;
        cout << "Enter the integer: ";
        cin >> num;
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "it is not an integer thats why calculating the avg now";
            return;
        }
        else{
            in.push_back(num);
        }
    }
}

int main(){
    vector<int> in;
    Userin(in);
    int avg;
    int sum = 0;
    int c = 0;
    for(auto i : in){
        c++;
        sum+=i;
    }
    avg = sum/c;
    cout << endl;
    cout << "The avg is " << avg;

  return 0;
}
