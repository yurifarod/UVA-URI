#include <stdio.h>
#include <algorithm>

using namespace std;
int main(){
  int a[3], b[3];
  scanf("%d %d %d", &a[0], &a[1], &a[2]);
  b[0] = a[0]; b[1] = a[1]; b[2] = a[2];
  sort(b, b+3);
  printf("%d\n%d\n%d\n\n", b[0], b[1], b[2]);
  printf("%d\n%d\n%d\n", a[0], a[1], a[2]);
  return 0;
}
