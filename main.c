#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  resultat,x,y ;
    char operateur;

    printf("Entrez deux nombres :\n");
    scanf("%d%d",&x,&y);
    printf("Veuillez entrer un operateur:\n");
    scanf(" %d",&operateur);
    switch(operateur){
        case '+': resultat=x+y;
                 break;
        case '-' : resultat=x-y;
                break;
        case '*' : resultat=x*y;
                 break;
        case '/' : if(y!=0)
                    resultat=x/y;
                   else
                  printf("la division par 0 est impossible\n ");
                 break;
        case 'q': printf("Le programme sarrete\n  ");
                 break;

        default : printf("erreur");
                 break;
    }
    pritnf("resultat=%f\n",resultat);
    return 0;
}

