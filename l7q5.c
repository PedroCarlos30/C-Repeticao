#include<stdio.h> 
#include<locale.h>
//M�dias e conceitos de 10 alunos
int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, m; 
	int cont;
	for(cont = 1; cont <= 10; cont ++){
		printf("%i� aluno:\n", cont);
		printf("Digite a primeira nota:\n");
		scanf("%f", &n1);
		printf("Digite a segunda nota:\n");
		scanf("%f", &n2);
		printf("Digite a terceira nota:\n");
		scanf("%f", &n3);
		m = (n1 + n2 + n3) / 3;
		if(m >= 9){
			printf("Sua m�dia foi %.1f, e o conceito obtido foi A.\n", m);
		}
		else if(m >= 7 && m < 9){
			printf("Sua m�dia foi %.1f, e o conceito obtido foi B.\n", m);
		}
		else if(m >= 6 && m < 7){
			printf("Sua m�dia foi %.1f, e o conceito obtido foi C.\n", m);
		}
		else if(m >= 4 && m < 6){
			printf("Sua m�dia foi %.1f, e o conceito obtido foi D.\n", m);
		}
		else{
			printf("Sua m�dia foi %.1f, e o conceito obtido foi E.\n", m);
		}
	}
	return(0);
	}
