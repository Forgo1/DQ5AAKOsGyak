#include	<sys/types.h>
#include	<stdio.h>
#include	<stdlib.h>
#define N 100
#define ESC 27
#include <string.h>
#include <ctype.h>

void beolvas(char*szoveg);

int
main(void)
{
	int status;
        char szoveg[N];
        int i;
	char szoveg2[N];
       
      do {
       printf("Adja meg a parancsot:");
       
       beolvas(szoveg);      
       system(szoveg);
       
	}
	while(szoveg!=szoveg2);
	
	

}

void beolvas(char*szoveg){

int i=0;
char ch;
printf("Enter+Esc+Enter lenyomasaig olvassa be a karaktereket:\n");
while((ch=getchar())!=ESC){
szoveg[i]=ch;
i++;
}
//szoveg[i]= "\0";
return;

}





