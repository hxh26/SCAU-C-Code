#include <stdio.h>

int main()
{
    int n;
    int result = 1;
    int i = 1;

    scanf("%d",&n);

    while (i <= n){
        result = result * i;
        i = i + 1;
    }
    printf("%d\n",result);
    return 0;
}

