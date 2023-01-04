#include <iostream>
using namespace std;

int main() {
    
 int a, b, c;
 cin >> a >> b >> c;
 
 // if a == b
 //    if b == c
 //       10000 + c * 1000
 //    else
 //       1000 + a * 100
 // else
 //     if (b == c) or (a == c)
 //       1000 + c * 1000
 //     else 
 //       max(a, b, c) * 100
 
 if (a == b) {
  if (b == c)
    cout << 10000 + (c * 1000) << endl;
  else
    cout << 1000 + (a * 100) << endl;
 }
 else {
  if ((b == c) || (a == c))
    cout << 1000 + (c * 100) << endl;
  else {
    if ((a > b) && (a > c))
        cout << a * 100 << endl;
    else if ((b > c) && (b > a))
        cout << b * 100 << endl;
    else
        cout << c * 100 << endl;
  }  
 }
 return 0;
    
}