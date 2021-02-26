#include <stdio.h>
#include<time.h>
#include <stdlib.h>
/*Scrivi un programma che legge un numero compreso tra 10 e 20 e genera altrettanti numeri casuali compresi tra 100 e 200.
il numero conta quanti numeri pari e dispari sono stati visualizzati,visualizzando per ciascun gruppola loro media
*/
int main(){
	
	int n, contaP, contaD, i;
	
	srand (time(NULL));
	n = (rand() %(20-10)+10);
	printf("%d", n);

	if(n > 10 && n < 20){
	    for(i=0;i<10;i++)
	{
		srand (time(NULL));
		n = (rand() %(200-100) +100);
		printf(" %d", n);
		
	/*	if(n%2==0){
			contaP++;
			
		} 
		else{
			contaD++;
		}*/
	}
		
	}
	
}
