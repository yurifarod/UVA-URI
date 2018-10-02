#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
  int b, n, ball[92];
  bool res[91], fim;
  scanf("%d %d", &n, &b);
  fim = true;

  while((b != 0) && (n != 0)){
    for(int i = 0; i < b+1; i++){
      res[i] = false;
    }

    for(int i = 0; i < b; i++){
      cin >> ball[i];
    }

    for(int i = 0; i < b; i++){
      for(int j = i+1; j < b; j++){
        res[abs(ball[i]-ball[j])] = true;
      }
    }

    for(int i = 1; i < n+1; i++){
      if(!res[i]){
        fim = false;
      }
    }
    if(fim){
      printf("Y\n");
    }
    else{
      printf("N\n");
    }

    scanf("%d %d", &n, &b);
    fim = true;
  }

  return 0;
}
