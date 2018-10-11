#include <stdio.h>
int main()
{
	float notas[10];
	float media, soma=0, nota_maior=0;
	int i, maior=0, qdt_nota_maior=0;
	
	//passo1: Ler todas as notas e preencher os elementos de vetor
	for(i=0;i<10;i++)
	{
		printf("\nEntre com a nota do aluno %d: ", i+1);
		scanf("%d", &notas[i]);
		soma = soma + notas[i];
	}
	//passo2: calcular media
	media = soma / i;
	
	//passo3: percorrer o vetor e contar as notas>media
	for(i=0;i<10;i++)
	{
		if(notas[i] > media)
			media++;
			
		if(notas[i] == nota_maior)
			qdt_nota_maior++;	
	}
	
	printf("\nMedia da turma = %.2f", media);
	printf("\nQuantidade de alunos com nota maior que media = %d",maior);
	printf("\n%d alunos tiraram a maior nota da turma que foi %.2f\n\n",qdt_nota_maior,nota_maior);
	
	system ("pause");
	
	return 0;
}
