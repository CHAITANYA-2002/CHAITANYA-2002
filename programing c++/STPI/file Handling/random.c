#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE* fpin;
    FILE* fpout;
    int counter = 0;
    char currentCharacter, filename[10000];
    char previousCharacter=' ';

    // fpin = fopen("source.txt", "r"); /* open for reading */
    // if (fpin == NULL)
    // {
    //     printf("Fail to open source.txt!\n");
    //     return 1;
    // }

    // fpout = fopen("target.txt", "w");/* open for writing */
    // if (fpout == NULL)
    // {
    //     printf("Fail to open target.txt!\n");
    //     return 1;
    // }
      printf("Enter the filename to open for reading \n");
   scanf("%s",filename);
   fpin = fopen(filename, "r");
   if (fpin == NULL){
      printf("Cannot open file %s \n", filename);
      exit(0);
   }
   
   printf("Enter the filename to open for writing \n");
   scanf("%s", filename);
   fpout = fopen(filename, "w");
   if (fpout == NULL){
      printf("Cannot open file %s \n", filename);
      exit(0);
   }

    /* read a character from source.txt until END */
    while((currentCharacter = fgetc(fpin)) != EOF)
    {
        /* find first letter of word */
        if(!isalpha(previousCharacter) && previousCharacter != '-' && isalpha(currentCharacter))
        {
            currentCharacter = toupper(currentCharacter); /* lowercase to uppercase */
            //counter++; /* count number of words */
        }
        fputc(currentCharacter, fpout); /* put a character to target.txt */

        /* printf("%c",currentCharacter); */

        previousCharacter = currentCharacter; /* reset previous character */
    }

   printf("done");
    fclose(fpin);   /* close source.txt */
    fclose(fpout);  /* close target.txt */
    return 0;
}