#include <iostream>
using namespace std;

int main(){
    
 int init_n, n, l, r, new_r, cycle;
 cin >> init_n;
 n = init_n;
 cycle = 0;
 
 do {
     
    // 자리수 해체하기
    l = n / 10;
    r = n % 10;
    // 자리수 더한 수에서 오른쪽 자리 수 구하기
    new_r = (l + r) % 10;
    n = 10 * r + new_r;
    cycle += 1;
     
 } while (n != init_n);
  
 cout << cycle << endl;
 
 return 0;   
}