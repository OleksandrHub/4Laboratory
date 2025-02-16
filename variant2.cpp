#include <stdio.h>

int main()
{
    float a = 2.1, S = 0;
    int i, n;
    printf("n = "); scanf("%i",&n);
    for (i=0; i<n ;i++, S+=(a*a+i*i)/(2*i) );
    printf("%f",S);
    return 0;
}
