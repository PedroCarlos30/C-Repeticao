#include<stdio.h> 
#include<locale.h> 
//Somat�rio dos pares de 1 at� 500
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, s;
	for(i = 1; i <= 500; i++){
		if(i % 2 == 0){
			s = s + i;
		}
	}
	printf("O somat�rio dos pares de 1 at� 500 �: %i \n", s);
	return(0);
}