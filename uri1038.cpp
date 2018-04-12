#include <stdio.h>

using namespace std;
int main(){
  float valor;
  int n, p;
  scanf("%d %d", &p, &n);
  if(p == 1){
    valor = n*4;
  }
  if(p == 2){
    valor = n*4.5;
  }
  if(p == 3){
    valor = n*5;
  }
  if(p == 4){
    valor = n*2;
  }
  if(p == 5){
    valor = n*1.5;
  }
  printf("Total: R$ %.2f\n", valor);

  return 0;
}

/* First i use this code, but the judge returns Error. I don't why the reason!
#include <stdio.h>

using namespace std;
int main(){
  float a[5];
  int n, p;
  a[1] = 4;
  a[2] = 4.5;
  a[3] = 5;
  a[4] = 2;
  a[5] = 1.5;
  scanf("%d %d", &p, &n);
  printf("Total: R$ %.2f\n", n*a[p]);

  return 0;
}

*/
