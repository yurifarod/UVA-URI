#include<stdio.h>
#include<math.h>
#include<string.h>
#define tamanho 10000
char primo[tamanho];
using namespace std;

int main(){
//timeout error!	
	long long int n;
	int i, j, val;
	memset(primo, 1, sizeof primo);
	val = sqrt(tamanho);

    for(i = 2; i <= val; i++){
		if(primo[i] == 1){
			for(j = i+i; j <= tamanho; j = j+i){
				primo[j] = 0;
			}
		}
	}

	while(scanf("%lld", &n) != EOF){

		if(n > 0){
			printf("%lld = %d", n, 1);
		}
		else{
			printf("%lld = %d", n, -1);
		}

		for(i = 2; i < tamanho; i++){
				if(primo[i] == 1){
					if(n % i == 0){
						printf(" X %d", i);
						n = n/i;
						while(n % i == 0){
							printf(" X %d", i);
							n = n/i;
						}

					}

				}
			}

	}

	return 0;
}
