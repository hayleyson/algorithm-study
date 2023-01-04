#include <iostream>
using namespace std;

int main() {
    
 int h, m;
 cin >> h >> m;
 
 // if m >= 45 -> m - 45 is new m, h is still h
 // if m < 45 -> m + 60 - 45 is new m, if h == 0, 23 is new h, else h is h - 1
 
 if (m >= 45)
    m = m - 45;
 else {
 
    m = m + 15;
    
    if (h == 0) 
        h = 23;
    else
        h = h - 1;
     
 }
 
 cout << h << " " << m << endl;
 
 return 0;
    
}