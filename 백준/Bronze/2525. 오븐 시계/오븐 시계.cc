#include <iostream>
using namespace std;

int main() {
    
 int h, m, t, t_hr, t_min, carry = 0;
 cin >> h >> m;
 cin >> t;
 
 // define carry variable to 0
 // first divide t by 60 -> quotient = hours, remainder = minutes
 // m = m + minutes -> if new m >= 60 -> subtract 60 and set carry to 1
 // h = h + hours + carry -> if new h >= 24 -> subtract 24
 
 t_hr = t / 60;
 t_min = t % 60;
 
 m = m + t_min;
 if (m >= 60) {
    m = m - 60;
    carry = 1;
 }
 h = h + t_hr + carry;
 if (h >= 24)
    h = h - 24;
 
 cout << h << " " << m << endl;
 
 return 0;
    
}