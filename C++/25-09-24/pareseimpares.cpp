#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int x;
	
	printf("Os n�meros pares s�o: ");
	for(x = 1; x < 10; x++){
		if(x % 2 == 0){
			printf("\n %d", x);
		}
	}
	
	printf("\n\nOs n�meros �mpares s�o: ");
	for(x = 1; x < 10; x++){
		if(x % 2 == 1){
			printf("\n %d", x);
		}
	}
	

}
