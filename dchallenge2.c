include <stdio.h>

int main() 
{
    int tab[1000];
    int i;
    int n;
    printf("taper le nombre des chiffres:\n");
    scanf("%d",&n);
    printf("taper les nombre:\n");
    for(i=0;i<n;i++)
  {
    printf("\n");
    scanf("%d",&tab[i]);
  } 
  for(i=0;i<n;i++)
 {
   printf("%d",tab[i]);
 }
}