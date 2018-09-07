#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float resultado;
    
    printf("\nEntre com n1:");
    scanf("%d",&n1);
    printf("\nEntre com n2:");
    scanf("%d",&n2);
    
    resultado = n1+n2;
    
    printf("\nSoma = %.0f\n", resultado);
    
    resultado = n1-n2;
    
    printf("\nSubtração = %.0f\n",resultado);
    
    /* comentario de bloco */
         
    resultado = n1*n2;
    
    printf("\nMultiplicacao = %.0f\n",resultado);     
    
    resultado = (float)n1/n2;
    
    printf("\nDivisao = %.0f\n",resultado);
    
    system ("pause");
    
    return 0;
    
}    
         
