#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, i;
    do
    {
        printf("inserisci un numero\n");
        scanf("%d", &n);
    } while (n <= 0);
    printf("i numeri minori e pai di %d sono:\n",n);
    do
    {
        i++;
        if (i <= n && i % 2 == 0)
        {
            printf("%d  ", i);
        } 
    } while (i < n);
    printf("\n\n");
    return 0;
}