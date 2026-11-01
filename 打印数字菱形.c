#include <stdio.h>

int main()
{
    int n,i,j;
    int mid;
    scanf("%d",&n);
    mid = (n+1)/2;
    for(i = 1;i<=mid;i++){
        for(j = 1;j<=mid-i;j++){
            printf(" ");
        }
        printf("%d",i);
        if(i>1){
           for(j = 1;j<=2*i-3;j++){
               printf(" ");
           }
           printf("%d",i);
           }
           printf("\n");
    }
    for(i = mid-1;i>=1;i--){
        for(j=1;j<=mid-i;j++){
            printf(" ");
        }
        printf("%d",i);
        if(i>1){
            for(j=1;j<=2*i-3;j++){
                printf(" ");
            }
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
