#include <stdio.h>

//algoritmo para contagem dos numeros naturais 

main(){
	
	int numero, a; //declarando as variaveis 
	
	printf("digite um numero: "); //imput do usuario salvo na variavel numero
	scanf("%d", &numero);
	
	
	
	for(a=1;a<=numero;a++) //la�o de repeti��o responsavel por fazer a contagem dos numeros 
	printf("%d ", a); //impress�o do resultado
}
