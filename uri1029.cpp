#include <stdio.h>
#define max = 39;

int calls, num_calls;

int fib(int n) {
   if(n == 0){
       num_calls++;
       return 0;
    }else if(n == 1){
        num_calls++;
        calls++;
        return 1;
    }else{
        num_calls++;
        return fib(n - 1) + fib(n - 2);
    }
}
int main() {
    int N, i, X, result;
    scanf("%d", &N);
    for (i = 0; i < N; ++i){
        calls = 0;
        num_calls = 0;
        scanf("%d", &X);
        result = fib(X);
        printf("fib(%d) = %d calls = %d\n", X, num_calls - 1, calls);
    }
	return 0;
}
