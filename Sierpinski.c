#include<stdio.h>
#include<stdlib.h>

int main(void){
    int (*st)[4097] = malloc(4097*sizeof(*st));
    st[0][2048] = 1;
    printf("P2 4097 4097 1\n");
    for (int j = 0; j <= 4096; j++){
	printf("%d ", st[0][j]);
    }
    printf("\n");
    for (int i = 1; i <= 4096; i++){
	for (int j = 0; j <= 4096; j++){
	    st[i][j] = (st[i-1][j-1] + st[i-1][j+1]) % 2;
	    printf("%d ", st[i][j]);
	}
	printf("\n");
    }
    free(st);
    return 0;
}
