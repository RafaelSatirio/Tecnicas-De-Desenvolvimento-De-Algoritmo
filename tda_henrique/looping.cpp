#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i, j;
	
	printf("Os n�meros pares s�o:");
	for(i=1; i<=10; i++){
		
		if (i % 2 == 0){
			printf("\n%d", i);
		}
		
	}  
	
	
	printf("\nOs n�meros �mpares s�o:");
	for(j=1; j<=10; j++){
		
		if (j % 2 == 1){
		printf("\n%d", j);
	}
	
	}
}
