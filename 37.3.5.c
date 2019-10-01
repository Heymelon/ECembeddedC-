#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
I en triangel kan man beteckna sidorna med a,b och c. Om man
känn er till längderna för sidorna a och b samt vinkeln V mellan dessa sidor, kan man 
räkna ut längden av sidan c med formeln c= rotenav a^2+b^2 -2abcosV

Detta program läser in längderna
på två sidor i en triangel och vinkeln mellan sidorna. 

Programmet avgör om triangeln är liksidig (alla sidor lika), 

libent(två sidor lika) 

eller oliksidig
(inga sidor lika)

Tips: När maan jämför två flyttalsvariabler för att se om de är lika
bör man inte a nvända operatorn== direkt eftersom talen lagras i
en approxirnativ form. Beräkna istället skillnaden mellan talen
och undersök om absolutvärdet (se faktarutan på sidan 51) av
denna skillnad är minde än ett väldigt litet tal, t.ex. 10-l.
*/


int main() 
{

// sidors längd i cm
double a,b,;
// vinkel mellan ab
int v;
// omräkning till radianer
double gamma = v * 2 * PI / 360;  
//formel för att hitta okänd sida
double c = sqrt(a*a + b*b - 2*a*b*cos(gamma));
 // ett litet tal
double litet = 1e-10; 

// be om input
printf("Enter length of side a: \n");
scanf("%ld"&a);

printf("Enter length of side b: \n");
scanf("%ld"&b);

printf("Enter angle between a and b: \n");
scanf("%d"&v);


// formel för att hitta C (a^2+b^2 -2abcosV)
 c=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(v))


//jämförelser
// if a==b && a==c print triangle är liksidig

//if (fabs(a-b) < e && fabs(a-c) < e && fabs(b-c) < e)
//     printf("Liksidig");

return 0;

}