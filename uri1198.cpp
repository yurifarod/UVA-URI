#include <stdio.h>

using namespace std;
int main(){
  long long int s1, s2;
  while(scanf("%lld %lld", &s1, &s2) != EOF){
    if(s1>s2){
      printf("%lld\n", s1-s2);
    }
    else{
      printf("%lld\n", s2-s1);
    }
  }

  return 0;
}
