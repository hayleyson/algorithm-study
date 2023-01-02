// raw raw raw solution...

// #include <iostream>
// using namespace std;

// int main(){
    
//  int n;
//  cin >> n;
 
//  for (int i = 1; i <= n; i++) {
  
//   for (int j = 0; j < (n-i); j ++) {
//     cout << " ";
//   }
 
//   for (int k = 0; k < i; k ++) {
//     cout << "*";
//   }
     
//   cout << '\n';
//  }

 
//  return 0;   
// }

// better solution
// ref: https://stackoverflow.com/questions/5201619/right-justifying-output-stream-in-c
// ref: https://stackoverflow.com/questions/7897163/stdcout-to-print-character-n-times
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
 int n;
 cin >> n;
 
 for (int i = 1; i <= n; i++) 
  
  cout << right << setw(n) << string(i, '*') << '\n';

 
 return 0;   
}