#include <cstdio>

using namespace std;

long a,b;

int main () {
  while (scanf("%lu %lu", &a, &b) != EOF) {
    if (a>b)
      printf("%lu\n", a-b);
    else
      printf("%lu\n", b-a);
  }
}
