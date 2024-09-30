include <stdio.h>

int main() 
{
    int tab[1000];
    int i;
    int n;
    int min;
    printf("taper le nombre des chiffres:\n");
    scanf("%d",&n);
    printf("taper les nombre:\n");
    for(i=0;i<n;i++)
    {
      printf("\n");
      scanf("%d",&tab[i]);
    
    }
    min=tab[0];
    for(i=0;i<n;i++)
  {
    if(tab[i]<min)
    min=tab[i];
  }

   printf("%d",min);


}