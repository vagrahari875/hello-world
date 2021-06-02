
// Write to a text file
#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fptr;
   fptr = fopen("program.txt","w");
   fprintf(fptr,"Open source");
   fclose(fptr);

   return 0;
}
