#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){

  int n, t, inst = 1, d[105], p[105], moch[105][605], i, j;
  while( scanf( "%d%d", &n, &t ) && n ) {
    for(i=1; i<=n; i++ )
      scanf( "%d%d", &d[i], &p[i] );

    for(i=1; i<=t; i++) {
      moch[0][i] = 0;
      for(j=1; j<=n; j++){
        if( i-d[j] < 0 )
          moch[j][i] = moch[j-1][i];
        else {
          moch[j][i] = max( moch[j-1][i], moch[j-1][ i-d[j] ] + p[j] );
          moch[j][i] = max( moch[j][i], moch[j][ i-d[j] ] + p[j] );
        }
      }
    }
    printf( "Instancia %d\n%d\n\n", inst++, moch[n][t] );
  }

  return 0;
}
