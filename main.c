#include<stdio.h>
#include<stdlib.h>

/* Conversion en binaire */

int main()
{

 int  N,Cpt,U,P;

 do {
     printf("Donner un nombre entier positif a convertir : ");
     scanf("%d",&N);
    }while(N < 0);

 P=0; Cpt=1;

while (N != 0)
{
    U=N%2;
    P=(U*Cpt)+P;
    Cpt=Cpt*10;
    N=N/2;
}

 printf("\n Converssion . . . \n");
 printf("\n La converssion de %d en Binaire = %d \n\n",N,P);

 return 0;

}
