#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int coun = 0;
    srandom(time(NULL)); 
    char randChar;

    int  passLength;

    printf("Please input  password Length \n");
    scanf("%d", &passLength);

    while(count < passLength)    {
        randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
        printf("%c", randChar);
        count++;
    }
    printf("\n");
    return 0;
}
