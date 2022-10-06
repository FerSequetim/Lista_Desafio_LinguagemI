//Programa que faz o cálculo do IMC (Índice de Massa Corporal) e apresentar o resultado  
#include <stdio.h>
main(){
	float Peso, Altura, IMC;
	printf("Digite seu peso:");
	scanf("%f", &Peso);
	printf("Digite sua altura:");
	scanf("%f", &Altura);
	IMC=Peso/(Altura*Altura);
	printf("Seu IMC e: %.2f\n", IMC);
	if(IMC<18.5){
		printf("\n\nSeu IMC esta incluso na condicao Magreza");
	}else if (IMC>=18.5 && IMC<=24.9){
		printf("Seu IMC esta incluso na condicao Normal");
	}else if (IMC>=25.0 && IMC<=29.9){
		printf("Seu IMC esta incluso na condicao Sobrepeso");
	}else if (IMC>=30.0 && IMC<=34.9){
		printf("Obesidade Grau I");
	}else if (IMC>=35.0 && IMC<=39.9){
		printf("Obesidade Grau II");
	}else if (IMC>=40.0) 
		printf("Obesidade Grau III");
}
		

