#include    <stdlib.h>
#include    <stdio.h>

main()
{
    char    tamanho;
    do{
        printf("\n Digite o tamanho desejado: ");
        fflush(stdin);
        scanf(" %c", &tamanho);
        if (tamanho == 'G' || tamanho == 'g')
            printf("\n www.tamanhog.com.br \n\n");
        else if (tamanho == 'M' || tamanho == 'm')
            printf("\n www.tamanhom.com.br \n\n");
        else if (tamanho == 'P' || tamanho == 'p')
            printf("\n www.tamanhop.com.br \n\n");
        else if (tamanho == 'F' || tamanho == 'f')
            printf("\n Finalizando o programa \n\n");
        else
            printf("Tamanho invalido");
        }
    while (tamanho != 'F' && tamanho != 'f');
    system("pause");
}