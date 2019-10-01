#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Övning 2.1 \n\n");
    printf("Skriv in 2 heltal: \n\n");

        int int1,int2,sum;

        scanf("%d", &int1);
        scanf("%d", &int2);
        sum = int1+int2;


        printf("Din summa ar = %d",sum);



    int antal_bytes = sizeof(double); //längden av typen doube
     printf("Double bytes = %d \n",antal_bytes);

    int antal_bytes2 = sizeof(int);

    return 0;
}
