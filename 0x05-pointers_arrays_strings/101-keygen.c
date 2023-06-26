#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int  passLength;
    char randChar;
    int count = 0;
    srandom(time(NULL)); 
  

    printf("Tada! Congrats\n")
    scanf("%d", &passLength);

    while(count < passLength)    {
        randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
        printf("%c", randChar);
        count++;
    }
    printf("\n");
    return 0;
}
