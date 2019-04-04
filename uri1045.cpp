#include <stdio.h>
#include <algorithm>

using namespace std;
int main(){
  float l[3], a, b, c;

  scanf("%f %f %f", &l[0], &l[1], &l[2]);

  sort(l,l + 3);
  a = l[2];
  b = l[1];
  c = l[0];

  if(a >= b + c){
    printf("NAO FORMA TRIANGULO\n");
  }
  else{
    if((a*a) == (b*b) + (c*c)){
      printf("TRIANGULO RETANGULO\n");
    }
    if((a*a) > (b*b) + (c*c)){
      printf("TRIANGULO OBTUSANGULO\n");
    }
    if((a*a) < (b*b) + (c*c)){
      printf("TRIANGULO ACUTANGULO\n");
    }
    if((a == b) && (a == c)){
      printf("TRIANGULO EQUILATERO\n");
    }
    if(((a == b) && (c != a))|| ((a == c) && (a != b)) || ((b == c) && (a != b))){
      printf("TRIANGULO ISOSCELES\n");
    }
  }

  return 0;
}
