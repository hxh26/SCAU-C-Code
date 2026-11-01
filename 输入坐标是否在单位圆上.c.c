#include <stdio.h>
#include <math.h>

int main()
{
    double x,y;
    double distance;
    scanf("%lf,%lf",&x,&y);
    distance = sqrt(x*x+y*y);
    if(fabs(distance-1.0)<0.001){
        printf("Y");
    }else{
        printf("N");
    }
    return 0;
}
