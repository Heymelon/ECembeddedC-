#include <stdio.h>
#include <stdlib.h>

int main() 

{
/*Ett program som frågar dig om du är en kille eller en tjej.Därefter ber programmet
dig skriva in ditt personnummer (utan minustecken) och läser in personnummret
som en long long int. 
I personnummer är den näst sista siffran udda för män och jämn
för kvinnor. Programmet kontrollerar att detta stämmer och
skriver ut texten Stämmer eller inte. 
*/

//deklarationer
long long int personnummer;
_Bool persongender;

// ber om gender input, sparar resultat i bool
printf("Enter your gender, 1=male 0=female \n");
scanf("%d",&persongender);

// ber om personnumer, sparas i long long int
printf("Enter your personnumer \n");
scanf("%lld",&personnummer);

printf("Ditt Pnummer is:  %lld \n",personnummer);
printf("Ditt odd even adjusted Pnummer is:  %lld \n",personnummer/10);
printf("modulus Pnummer is:  %lld \n",(personnummer/10)%2 );

 // testar om personummer/10, dvs nummret -1 heltal ger rest på 1 eller ej vid delning av 2.
 // jämför bool värde från input med restvärde från personnummer för att bedömma odd/even
if( (personnummer/10%2) == persongender)

    {
        printf("Gender check correct");
    }   
    else
        {
            printf("Gender check incorrect");
        }
    
return 0;
}