#include <stdio.h>
#include <string.h>

using namespace std;
int main(){

  int n;

  scanf("%d", &n);
  for(int it = 0; it < n; it++){
    char p1[50], p2[50], p3[100];
    memset(p3, 0, sizeof p3);
    scanf("%s %s", &p1, &p2);

    int t1 = strlen(p1);
    int t2 = strlen(p2);

    int i = 0;
    int j = 0;
    while(i < (t1+t2) ){
      if(j < t1){
          p3[i] = p1[j];
          i++;
      }
      if(j < t2){
          p3[i] = p2[j];
          i++;
      }
      j++;
    }

    printf("%s\n", p3);
  }

  return 0;
}
