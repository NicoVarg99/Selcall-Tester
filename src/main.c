#include <stdio.h>
#include <string.h>

char *repeatTone(char *recipient){
	int i;

	for(i=1;i<5;i++)
		if(recipient[i]==recipient[i-1])
			recipient[i]='E';

	return recipient;
}

int main(){
	char recipient[100];
	printf("Inserisci il numero da chiamare\n>");
	fgets(recipient,6,stdin);
	
	printf("Chiamo %s\n",recipient);
	strcpy(recipient,repeatTone(recipient));
	printf("Repeat tone: %s\n",recipient);
}
