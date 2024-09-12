#include    <stdlib.h>
#include    <stdio.h>

//comando switch = usar para a mesma variavel - comparações de igualdade

int main()
{
    char tamanho;
    do
    {
        fflush(stdin);
        printf("\n Digite o tamanho desejado: ");
        scanf("%c", &tamanho);
        switch (tamanho)
        {
            case 'g':
            case 'G':
                printf("\n www.tamanhog.com.br \n\n");
            break;
            case 'm':
            case 'M':
                printf("\n www.tamanhom.com.br \n\n");
            break;
            case 'p':   
            case 'P':
                printf("\n www.tamanhop.com.br \n\n");
            break;
            case 'f':
            case 'F':
                printf("Finalizando o programa");
            break;
            default:
                printf("\n Tamanho invalido \n\n");
        }
    }
    while (tamanho != 'f' && tamanho != 'F');
}