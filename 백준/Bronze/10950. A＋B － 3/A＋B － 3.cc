#include <iostream>
using namespace std;

// int main(){

//     int t, a, b;
//     cin >> t;

//     for (int i = 0; i < t; i++){
//         cin >> a >> b;
//         cout << a + b << endl;
//     }

// }

int main()
{

    int t;
    cin >> t;
    int a[t];
    int b[t];

    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < t; i++)
    {
        cout << a[i] + b[i] << endl;
    }
}