#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include "affichage.h"
void ENCADRE()
{
    int Longueur;
    gotoxy(1,1);
    printf("==================================================");
    for(Longueur=2;Longueur<longueurM;Longueur++)
    {
        gotoxy(1,Longueur);
        printf("||");
        gotoxy(largeurM ,Longueur);
        printf("||");
    }
    gotoxy(1,Longueur);
    printf("==================================================");
}
void MENU(int n)
{
    ENCADRE();
    n=3+4*n;
    gotoxy(5,n);
    printf("_____________________________");
    n++;
    gotoxy(5,n);
    printf("|");
    gotoxy(33,n);
    printf("|");
    n++;
    gotoxy(5,n);
    printf("|___________________________|\n");
}
int digit_to_int(char d)
{
 char str[2];

 str[0] = d;
 str[1] = '\0';
 return (int) strtol(str, NULL, 10);
}
void choisir(int *adresseA,int mina,int maxa,int *adresseC)
{
    int a,inpt;
    a=*adresseA;
    inpt= getch();
        if(inpt==0x48)
            {
                if(a>mina)
                    {a--;*adresseA=a;}
            }
        else if(inpt==0x50)
            {
                if(a<maxa)
                    {a++;*adresseA=a;}
            }
        else if (inpt==13)
            {*adresseC=a;}
}
