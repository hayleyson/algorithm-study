#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

// 참고 사이트: https://takeknowledge.tistory.com/20
// 이번문제는 참고 사이트에서 많은 힌트를 얻었다.

// 다만, 아래 방법들은 cpp.sh 사이트에서는 잘 작동하지 않았다.
// 백준이 테스트할 대에는 파일을 읽어와 입력하기 때문인지 아래 코드를 '제출'하면 맞게 작동하였다. (이부분 확인필요)
// 백준 작동 원리 : https://www.acmicpc.net/blog/view/55

int main()
{

   int a, b;
   vector<int> a_v, b_v;

   // //  방법 1:
   //  while (true){
   //     cin >> a >> b;

   //     if (cin.eof() == true)
   //         break;
   //     a_v.push_back(a);
   //     b_v.push_back(b);

   //  }

   // // 방법 2:
   while (scanf("%d%d", &a, &b) == 2)
   {
      a_v.push_back(a);
      b_v.push_back(b);
   }

   // // 방법 3:

   //  while(scanf("%d %d", &a, &b) != EOF) {
   //     a_v.push_back(a);
   //     b_v.push_back(b);
   //  }

   // // 방법 4:
   //  while (scanf("%d %d", &a, &b) != -1 || scanf("%d %d", &a, &b) >0) {
   //     a_v.push_back(a);
   //     b_v.push_back(b);
   //  }

   for (int i = 0; i < a_v.size(); i++)
   {

      cout << (a_v[i] + b_v[i]) << '\n';
   }

   return 0;
}