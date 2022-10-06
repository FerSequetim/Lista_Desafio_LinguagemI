#include <stdio.h>
main(){
	float ValorEtanol, ValorGasolina, Beneficio;
	printf("Digite o valor do Etanol por litro:");
	scanf("%f", &ValorEtanol);
	printf("Digite o valor da Gasolina por litro:");
	scanf("%f", &ValorGasolina);
	Beneficio=ValorEtanol/ValorGasolina;
	if (Beneficio<=0.70){
		printf("Compensa abastecer com Etanol, pois o valor dele dividido pelo valor da gasolina está dando menos que 70%");
	}else{
		printf("Compensa abastecer com Gasolina, pois dividindo o valor do etanol pelo valor do litro da gasolina está resultando mais que 70%");
	}
}
