#include <cstdio>
using namespace std;

int N, B, H, W;

int main () {
  while (scanf("%d %d %d %d", &N, &B, &H, &W) != EOF) {
    int min = 999999;
    for (int i=0; i<H; i++) {
      int pxH;
      scanf("%d", &pxH);
      for (int j=0; j<W; j++) {
	int numW;
	scanf("%d", &numW);
	if ( (numW >= N) && (N*pxH <= B) && (N*pxH < min))
	  min = N*pxH;
      }
    }
    if (min == 999999)
      printf("stay home\n");
    else
      printf("%d\n", min);
  }
}
