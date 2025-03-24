#include<stdio.h>
int main () {
    int i,j,n;

    printf("Enter n: ");
    scanf("%d",&n);
    
    if (n % 2 != 0) {
        n++;
    } else {
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) {
                if(j==1 || j==n || i==n/2) {
                    printf("H");
                } else
                    printf(" ");
            }
            printf("\n");
        }
    }
 return 0;
}