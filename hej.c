#include <stdio.h>
#include <stdlib.h>

int main()

{
	printf("Hej! \n");

   char* cName;
   cName = getenv ("COMPUTERNAME");

   //if (cName!=NULL)
   printf ("The computer name is: %s",cName);



	return 0;
}
