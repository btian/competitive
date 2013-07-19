#include <cstdio>
using namespace std;

int v, t;

int main () {
  while (scanf("%d %d", &v, &t) != EOF) {
    if (t == 0)
      printf("0\n");
    else {
    double a = (double) v / (double) t;
    double s = 0.5*a*(2.0*t)*(2.0*t);
    if (s>0)
      s+=0.5;
    else
      s-=0.5;
    int is = (int)s;
    printf("%d\n", is);
    }
  }
}
