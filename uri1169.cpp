#include <stdio.h>
#include <math.h>

using namespace std;
int main(){
  int d, n;
  long long peso;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
      scanf("%d", &d);
      peso = pow(2,d)/1000/12;
      printf("%llu kg\n", peso);
  }

  return 0;
}
