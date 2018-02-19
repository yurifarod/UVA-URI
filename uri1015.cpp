#include <stdio.h>
#include <math.h>

int main(){
  float x1, x2, y1, y2, t;
  scanf("%f %f\n", &x1, &y1);
  scanf("%f %f\n", &x2, &y2);
  t = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  printf("%.4f\n", t);
  return 0;
}
