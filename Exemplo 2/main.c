#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int main(int argc, char** argv) {
	
float n1,n2,md;
printf("digite a primeira nota: ");
scanf("%f",&n1);
 printf("digite a segunda nota: ");
scanf("%f",&n2);
md=(n1+n2)/2;
		if (md>=5){
		printf("aluno alcancou a media: %.2f \n", md);
		printf ("aprovado");
		}
system("PAUSE");
return 0;
}
