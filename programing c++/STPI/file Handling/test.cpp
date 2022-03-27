#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 500000000

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        // printf("%s\n", argv[2]);
        FILE *fp1 = fopen(argv[1], "r");
        FILE *fp2 = fopen(argv[2], "w");
        char buffer[MAX_SIZE];
        char *temp;

        while (fgets(buffer, MAX_SIZE, fp1) != NULL)
        {
            // printf("%s\n",buffer);
            buffer[strcspn(buffer, "\n")] = 0;
            temp = strtok(buffer, " ");
            while (temp != NULL)
            {
                temp[0] = toupper(temp[0]);
                // printf("%s\n",temp);
                fprintf(fp2, "%s", temp);
                temp = strtok(NULL, " ");
                if (temp != NULL)
                {
                    fprintf(fp2, " ");
                }
            }
            fprintf(fp2, "\n");
        }
        fclose(fp1);
        fclose(fp2);
    }
    else {
        printf("Error : Usage .\\test.exe [file1] [file2]");
    }

    //  char file;
    //  scanf("%s",&file);
}