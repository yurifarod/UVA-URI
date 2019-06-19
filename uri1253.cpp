#include<stdio.h>
#include<string.h>
#define primeiro 65
#define ultimo 90

using namespace std;
int main(){
  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    char p1[50];
    scanf("%s", &p1);
    int t1 = strlen(p1);
    int move = 0;
    scanf("%d", &move);

    for(int j = 0; j < t1; j++){
      int carac = (int)p1[j];
      carac -= move;

      if(carac < primeiro){
        carac = (ultimo - (primeiro - carac - 1) );
      }

      p1[j] = (char)carac;
    }

    printf("%s\n", p1);
  }


  return 0;
}
