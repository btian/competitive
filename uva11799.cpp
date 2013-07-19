#include <cstdio>
using namespace std;

int main () {
  int T;
  scanf("%d", &T);
  for (int i=1; i<=T; i++) {
    int N;
    scanf("%d", &N);
    int max;
    scanf("%d", &max);
    for (int j=1; j<N; j++) {
      int t;
      scanf("%d", &t);
      if (t>max)
	max = t;
    }
    printf("Case %d: %d\n", i, max);
  }
}
