#include <stdio.h>
#include <locale>
int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int idade1,idade2;
	
	printf("Idade 1\n");
	scanf("%d",&idade1);
	printf("Idade 2\n");
	scanf("%d",&idade2);
	
	if (idade1 % 2 >= 1 || idade2 % 2 >= 1){
		printf("Voc� recebeu desconto");
	}	else {
		printf("Voc� n�o recebeu desconto;-;");
	}
	
	return 0;
}
