#include<stdio.h> 
#include<locale.h>
//Fatorial de um n�mero
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, n, fat = 1;
	printf("Digite um n�mero:  \n");
	scanf("%i", &n);
	if(n < 0){
		printf("N�o existe fatorial de n�mero negativo.");
	}
	else{
		for(i = 1; i <= n; i++){
			fat = fat * i;
		}
		printf("%i! = %i.", n, fat);
	}
	return(0);
	}