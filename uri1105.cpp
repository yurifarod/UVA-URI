#include <stdio.h>

using namespace std;
int main(){
  int nb, ns, db[21], cb[21];
  int v1, v2, v3;
  bool need;
  scanf("%d %d", &nb, &ns);
  while((nb != 0) && (ns != 0)){
    int v1, v2, v3;
    for(int i = 0; i < nb; i++){
      cb[i] = 0;
      //cin >> cb[i];
      scanf("%d", &cb[i]);
    }
    for(int i = 0; i < ns; i++){
      scanf("%d %d %d", &v1, &v2, &v3);
      cb[v1-1] = cb[v1-1] - v3;
      cb[v2-1] = cb[v2-1] + v3;
    }
    for(int i = 0; i < nb; i++){
      if(cb[i] < 0){
        need = true;
      }
    }
    if(need){
      printf("N\n");
    }
    else{
      printf("S\n");
    }
    need = false;
    scanf("%d %d", &nb, &ns);
  }

  return 0;
}
