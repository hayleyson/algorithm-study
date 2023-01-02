#include <iostream>
using namespace std;

int main(){
    
 cin.tie(NULL);
 ios_base::sync_with_stdio(false);
 
 int n;
 cin >> n;
 
 int a[n], b[n];
 
 for (int i = 0; i < n; i++){
    cin >> a[i] >> b[i];
    cout << a[i] + b[i] << '\n';
 }
  
 
 return 0;   
}