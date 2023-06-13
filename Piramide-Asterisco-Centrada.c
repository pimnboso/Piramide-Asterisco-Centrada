#include <stdio.h>
//lembrando que em cada linha é linhax2 -1
char main()
{
    int linhas, i, j, h, p;
    printf("Digite a quantidade de linhas que deseja em sua pirâmide: ");
    scanf("%d", &linhas);
    p = linhas;
    for(i = 1; i <= linhas; i++){
        for(h = 0; h <= p - i; h++){
            printf(" ");
        }
        for(j = 1; j <= i * 2 - 1; j++){
            printf("*");
        }
        printf("\n");
    }
}