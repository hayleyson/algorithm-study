#include <iostream>
using namespace std;

int main(){
    
 int n, sum, cnt;
 
 cin >> n;
 char arr[n][81];
 char curr;
 
 for (int i=0; i<n; i++){
  cin >> arr[i];
  int j = 0;
  cnt = 0;
  sum = 0;
  do {
    curr = arr[i][j];

    if (curr == 'O')
        cnt += 1;
    else
        cnt = 0;
    sum += cnt;
    j ++;
  } while (arr[i][j] != '\0');
  cout << sum << endl;
  
  
 }
 
 
 return 0;   
}