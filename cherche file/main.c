#include <stdio.h>
#include <string.h>
 
main()
{
 
  char test[]="texte2.txt";
  FILE *Fichier;
 
  char mot[30], motR[30];
 
     Fichier = fopen(test, "r");
     if (!Fichier)
         printf("\aERREUR: Impossible d'ouvrir " "le fichier: %s.\n", test);
 
  printf("  chercher : ");
  scanf("%s",motR);
 
 
   while (fgets(mot,30,Fichier) != NULL)
     {
         
         char *p = strchr(mot, '\n');
 
      if (p != NULL)
      {
         /* si on l'a trouve, on l'elimine. */
         *p = 0;
      }
        //printf("%s",motFr);
     if (strcmp(mot, motR) == 0)
     {
        printf("mot trouve \n");
        fclose(Fichier);
        return 0;
     }
 
 
    }
     printf("mot non trouv \n");
 
}
