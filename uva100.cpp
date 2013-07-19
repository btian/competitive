#include <cstdio>
#include <iostream>
using namespace std;

int a,b;
int cache[1000050] = {0};

int cycle (int n) {
  if (cache[n] > 0)
    return cache[n];
  int count = 1;
  long ln = n;
  while (ln != 1) {
    //cerr<<ln<<" ";
    if ( (ln&1))
      ln = 3*ln + 1;
    else
      ln = ln>>1;
    count++;
  }
  cache[n] = count;
  return count;
}

int main () {
  while (scanf("%d %d", &a, &b) != EOF) {
    printf("%d %d ", a, b);
    if (a>b) {
      int t = a;
      a = b;
      b = t;
    }
    //cerr<<a<<" "<<b<<endl;
    int max = 0;
    for (int i = a; i<=b; i++) {
      int ta = cycle(i);
      if (ta>max)
	max = ta;
    }
    printf("%d\n", max);
  }
}
