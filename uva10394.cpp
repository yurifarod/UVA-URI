#include<stdio.h>
#include<math.h>
#include<string.h>
#define tamanho 20000000
char primo[tamanho];
unsigned long long int gemeo[tamanho];

int main(){

	memset(primo, 1, sizeof primo);
	int j, i, val, t;
	t = 1;
	long long int n = 0;
	gemeo[0] = 0;
	gemeo[1] = 0;
	val = sqrt(tamanho);

	for(i = 2; i <= val; i++){
		if(primo[i] == 1){
			for(j = i+i; j <= tamanho; j = j+i){
				primo[j] = 0;
			}
		}
	}

	for(i = 3; i < tamanho; i++){
		if(primo[i] == 1 && primo[i+2] == 1){
			t++;
			gemeo[t] = i;
		}
	}

	while(scanf("%lld", &n) == 1){
		printf("(%llu, %llu)\n",gemeo[n+1],gemeo[n+1]+2);
	}

	return 0;
}
