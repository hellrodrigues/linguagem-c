#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int n, r;

    printf("digite um ano e tecle enter\n");

    scanf("%d", &n);
    getchar();
    printf("Digite um ano final \n");

    scanf("%d", &r);
    while (n <= r)
    {
        if (n % 4 == 0)
        {
            printf("o ano %d que voce digitou é um ano bissexto \n", n);
        }
        n++;
    }
    return 0;
}