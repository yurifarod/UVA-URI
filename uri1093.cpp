#include <stdio.h>
#include <math.h>

double probability(int ev1, int ev2, int at){
  double dice;
  if(at == 3){
    return ((double)ev1/(double)(ev1+ev2));
  }
  else{
    dice = 1.0 -(6-at)/6.0;
    dice = (1-dice)/dice;
    return ((1.0 - pow(dice,ev1))/(1.0 - pow(dice, ev1+ev2)));
  }

}

int main(){

  int ev1, ev2, at, d;
  int lf1, lf2;
  double prob;
  bool flag = true;
  scanf("%d %d %d %d", &ev1, &ev2, &at, &d);

  while(flag){
    lf1 = 0;
    lf2 = 0;
    while(ev1 > 0){
      ev1 -= d;
      lf1++;
    }
    while(ev2 > 0){
      ev2 -= d;
      lf2++;
    }

    prob = probability(lf1, lf2, at);
    printf("%.1f\n", prob*100);
    scanf("%d %d %d %d", &ev1, &ev2, &at, &d);

    if(ev1 == 00 && ev2 == 0 && at == 0 && d == 0){
      flag = false;
    }
  }

  return 0;
}
