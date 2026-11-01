#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int bai,shi,ge;
    scanf("%d",&n);

    ge = n%10;
    shi = (n/10)%10;
    bai = n/100;

    int result = ge*100 + shi*10 + bai;
    printf("%d\n",result);
    return 0;
}
