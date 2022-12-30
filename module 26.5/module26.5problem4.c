#include <stdio.h>
float circleArea(int R)
{
    return 3.14159*R*R;
}
int main()
{
    int R;
    scanf("%d",&R);
    printf("%f",circleArea(R));
    return 0;
}