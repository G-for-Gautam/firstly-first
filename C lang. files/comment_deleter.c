#include <stdio.h>
int main()
{

    FILE *ptr = fopen("trsh.c", "r");//rename the filename
    FILE *thug = fopen("trsh.c", "r");//rename the filename
    FILE *fp = fopen("trsh.c", "r+");//rename the filename
    if (ptr == NULL || thug == NULL || fp == NULL)
    {
        printf("ERROR");
        return 1;
    }
    else
    {
        printf("checkpoint_1");
    }
    char arr[2] = {'6', '9'}, ch, temp;

    temp = fgetc(thug);
    temp = fgetc(thug);

    while (1)
    {
        ch = fgetc(ptr);
        temp = fgetc(thug);
        if (ch == EOF)
        {
            break;
        }
        arr[0] = arr[1];
        arr[1] = temp;

        fputc(ch, fp);

        if ((arr[0] == '/' && arr[1] == '/') || (arr[0] == '/' && arr[1] == '*'))

        {

            while (1)
            {
                if (ch == '\n')
                {
                    break;
                }
                fputc(' ', fp);
                ch = fgetc(ptr);
                temp = fgetc(thug);
            }
            fputc(ch, fp);
        }
    }
    fclose(ptr);
    fclose(fp);
    fclose(thug);
    
    printf(" checkpoint_end");
    return 0;
}