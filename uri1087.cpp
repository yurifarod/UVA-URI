#include <stdio.h>
#include <cmath>
int main(){
  int x1, y1, x2, y2, mov;
  bool passou = false;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  while(x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0){

    if(x1 == x2 && y1 == y2){
      mov = 0;
      passou = true;
    }
    if(x1 == x2 && y1 != y2){
      mov = 1;
      passou = true;
    }
    if(x1 != x2 && y1 == y2){
      mov = 1;
      passou = true;
    }
    if(!(x1 == x2 && y1 == y2) && fabs(x1-x2) == fabs(y1-y2)){
      mov = 1;
      passou = true;
    }
    if(passou == false){
      mov = 2;
    }
    printf("%d\n", mov);
    passou = false;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  }
  return 0;
}
