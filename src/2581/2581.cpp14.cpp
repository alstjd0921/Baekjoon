#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
vector<int> p; //소수가 들어갈 배열
bool c[10001]; //true라면 소수가 아니라는 뜻

const int MAX = 10000;

int main() {
   //2이상 10000이하 소수 뽑아내기
   for (int i = 2; i * i <= MAX; i++) {
      if (c[i] == false) {
         for (int j = i + i; j <= MAX; j += i) {
            c[j] = true;
         }
      }
   }
   for (int i = 2; i <= 10000; i++) {
      if (c[i] == false) {
         p.push_back(i);
      }
   }


   int m, n;
   scanf("%d %d", &m, &n);


   vector<int> targetP;
   //해당 소수 구하기
   for (int i = 0 ; i < p.size(); i++) {
      if (p[i] >= m && p[i] <= n) {
         targetP.push_back(p[i]);
      }
   }

   // 예외처리
   if (targetP.size() == 0) {
      printf("%d\n", -1);
      return 0;
   }
   // 합계구하기
   int sum = 0;
   for (int i = 0; i < targetP.size(); i++) {
      sum += targetP[i];
   }
   // 최소값구하기
   int min = targetP[0];

   printf("%d\n%d\n", sum, min);

   return 0;
}