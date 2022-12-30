#include <stdio.h>
int main()
{
    float x, y;
    scanf("%f %f",&x,&y);
    float *a,*b , ans;
    a = &x;
    b = &y;
    ans = (*a + *b)/2;
    printf("%.3f\n",ans);
    return 0;
}
