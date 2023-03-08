#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    do
    {
        printf("inserisci un numero\n");
        scanf("%d", &n);
    } while (n<=0);
    printf("il numero successivo è: %d\n\n",n+1);
    return 0;
}