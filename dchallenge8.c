#include <stdio.h>
#include <stdlib.h>

int main()
{

   //Écrivez un programme C qui copie les éléments d'un tableau d'entiers dans un autre tableau.
   // Affichez les éléments du tableau original et du tableau copié pour vérifier que la copie est correcte.
   int n,j;
   printf("taper le nombre des nombres entres: \n");
    scanf("%d",&n);
    int tab[n];
       int cop[n];

    printf("taper les nombes:\n");

    for(int i=0;i<n;i++)
    {
       printf("\n");
       
       scanf("%d",&tab[i]);
    }
       for( j=0;j<n;j++)
       {

          cop[j]=tab[j] ;

        }
    printf("les elements originales sont : \n");

    for(int i=0;i<n;i++)
 {
                printf("%d",tab[i]);
 }
    printf("les elements copies sont : \n");

    for( j=0;j<n;j++)
 {
                printf("%d\n",cop[j]);
 }

    return 0;
}