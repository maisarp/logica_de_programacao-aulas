#include    <stdio.h>
#include <stdlib.h>

main ()
{
    float A, B, Media;

    printf("Digite o valor da primeira nota:");
    scanf("%f", &A);
    printf("Digite o valor da segunda nota:");
    scanf("%f", &B);

    Media = (A + B) / 2;

    if (Media >= 6)
    {
        printf("O aluno esta APROVADO com media %.2f\n", Media); //.2f para limitar a 2 casas decimais
    }
    else
    {   
        printf("O aluno esta REPROVADO com media %.2f\n", Media);
    }
    
    system("pause");
}