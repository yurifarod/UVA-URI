#include<stdio.h>
#include<string.h>
#include<math.h>
#define tamanho 66000

char primo[tamanho];
int main() {
	int val, i, j, k, n, l, u;
	memset(primo, 1, sizeof primo);
	val = sqrt(tamanho);

    for(i = 2; i <= val; i++){
		if(primo[i] == 1){
			for(j = i+i; j <= tamanho; j = j+i){
				primo[j] = 0;
			}
		}
	}

    scanf("%d", &n);
    for(k = 0; k < n; k++) {
        scanf("%d%d", &l, &u);
        int div = 1, val = l;
        for (i = l; i <= u; i++) {
            int x = i, d = 1;
            for (int j = 2; j < tamanho; j++) {
                if(primo[j] == 1){
					if (x % j == 0) {
						int c = 0;
						while (x % j == 0) {
							++c;
							x = x/j;
						}
						d *= (c + 1);
					}
            }
		}
            if (d > div) {
                div = d;
                val = i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", l, u, val, div);
    }
    return 0;
}
