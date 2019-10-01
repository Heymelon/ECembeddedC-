#include <stdio.h>
#include <stdlib.h>

/* Ett program som läser in ett brevs längd, bredd och tjocklek och som
undersöker om brevet har tillåtna mått eller inte. Programmet skall skriva ut
texten Måtten OK eller Felaktiga mått.*/

/* Pseudokod
Sätt tillåtna maximum samt minimum måttgränser, samt summerad gräns
Skapa booleanskt värde för brev ok ja/nej
Ta input för brevets alla mått;
Jämför mått mot max samt minvärden
Kontrollera brev ok i booleanskt värde
Skriv utt mått ok eller felaktiga mått
*/

int main() 

{   
    //Deklarationer för inputmått
    int length,width,thick,total;
    //Deklarationer för storleksgränser
    int minwidth,minlength,maxlength,maxthick,maxtotal;
    minwidth = 90;
    minlength = 140;
    
    maxthick = 100;
    maxlength = 600;
    maxtotal = 900;
    //Boolvärde för brev ok eller ej
    _Bool letterok = 1;

    //Tar user input
    printf("Enter the letter thickness: ");
    scanf("%d",&thick);

    printf("Enter the letter length: ");
    scanf("%d",&length);

    printf("Enter the letter width: ");
    scanf("%d",&width);

    //om max tjocklek är större /= än inputtjocklek - set brev till 1 (ok)
    if (maxthick >= thick)
    {
        letterok == 1;
    }         
        else 
        {
            letterok = 0; 
        }
    //om maxlängd är större än /= längd, och min längd är mindre - set brev till 1 (ok)
    if (maxlength >= length && length >= minlength)
    {
        letterok == 1;
    }         
        else 
        {
            letterok = 0; 
        }
    //om minbredd är mindre /= än inputbredd - set brev till 1 (ok)
    if (width >= minwidth)
    {
        letterok == 1;
    }         
        else 
        {
            letterok = 0; 
        }
    //Totalmått test
    total = length+width+thick;
    if (maxtotal >= total)
    {
        letterok == 1;
    }         
        else 
        {
            letterok = 0; 
        }
    //Brev boolean ok test samt utskrift
    if (letterok == 1)
    {
        printf("Measurements are ok! \n");
    }    
        else
        {
           printf("Measurements are wrong! \n");
           //printf("Letter thickness:%d \n",thick);
        }

    return 0;

}

