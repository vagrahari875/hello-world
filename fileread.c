#include <stdio.h>
int main() {
        FILE * fptr;
        char buffer[30], c;
        fptr = fopen("program.txt", "r");
        fgets(buffer, 50, fptr);
        printf("%s\n", buffer);

        while ((c = getc(fptr)) != EOF) printf("%c", c);
        fclose(fptr);
        return 0;
    }
