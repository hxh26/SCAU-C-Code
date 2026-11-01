#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum = 0;
    int i = 1;

    scanf("%d",&n);

    while (i<=n){
        sum = sum + i;
        i = i + 1;
    }
    printf("%d\n",sum);

    return 0;
}
