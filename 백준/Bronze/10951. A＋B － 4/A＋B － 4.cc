#include <iostream>
#include <vector>
using namespace std;

int main(){
    
 int a, b;
 vector<int> a_v, b_v;

 
 while (true){
    cin >> a >> b;
    if (cin.eof() == true)
        break;
    a_v.push_back(a);
    b_v.push_back(b);

 } 
 
 for(int i=0; i < a_v.size(); i++){

    cout << (a_v[i] + b_v[i]) << '\n';

 }
 
 return 0;   
}