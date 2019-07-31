#include <stdio.h>
#include<string.h>

using namespace std;
int main(){
  int n, l, vl;
  char p[50];
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%d", &l);

    for(int j = 0; j < l; j++){
      scanf("%s", &p);
      int length = strlen(p);

      for(int k = 0; k < length; k++){
        vl += (int)p[k] - 65 + j + k;
      }
    }

    printf("%d\n", vl);
    vl = 0;
  }

  return 0;
}
