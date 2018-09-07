#include <stdio.h>
#include <stdlib.h>
int main()

{
    float celsius, fahr;
    int c,f;
    printf("digite o grau celsius:");
    scanf("%d",&c);
    f=1.8*c+32;
    printf("o grau fahrenheit e =%d\n",f);
    system("pause");
    return 0;
}    
