#include <stdio.h>
#include<math.h>

int main(){
  int d, vf, vg;
  double timef, timeg, distG;
  while(scanf("%d %d %d", &d, &vf, &vg) != EOF){

      timef = 12.0/vf;
      distG = sqrt(d*d+12*12);
      timeg = distG/vg;
      if(timeg <= timef){
        printf("S\n");
      }
      else{
        printf("N\n");
      }

  }

  return 0;
}
