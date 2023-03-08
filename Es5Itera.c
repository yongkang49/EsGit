#include <stdio.h>

int main(int argc, char *argv[])
{
    int n1, n2, i;
    do
    {
        printf("inserisci il primo numero\n");
        scanf("%d", &n1);
    } while (n1 <= 0);
    do
    {
        printf("inserisci il secondo numero\n");
        scanf("%d", &n2);
    } while (n1 > n2);
    printf("i numeri compresi tra %d e %d sono:\n", n1, n2);
    for (int i = n1; i < n2; i++)
    {
        printf("%d ", i);
    }
    return 0;
}