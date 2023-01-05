#include <iostream>
using namespace std;

int main(){
    
 int n, sum=0, max = -1;
 cin >> n;
 int arr[n];
 
 for (int i=0; i<n; i++){
  cin >> arr[i];
  sum += arr[i];
  if (arr[i] > max)
    max = arr[i];
 }
 
 float new_avg;
 new_avg = ( (float) sum / (float) n ) * (100 / (float) max);
 cout << new_avg;
 
 return 0;   
}