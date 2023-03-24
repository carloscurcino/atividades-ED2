#include <stdio.h>

int main()
{
    float hash[5];
    for (int aluno = 0; aluno < 5; aluno++)
    {
        int matricula;
        float nota;
        printf("matricula:\n");
        scanf("%d", &matricula);
        printf("nota:\n");
        scanf("%f", &nota);
        // insira aqui o cÃģdigo para preencher o hash
        hash[matricula - 5538] = nota;
    }
    // insira aqui o cÃģdigo para imprimir todas  matriculas/notas
    for (int i = 0; i < 5; i++)
    {
        printf("A nota: %.1f\n", hash[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("A nota do aluno %d sera: %.1f\n", 5538 + i, hash[i]);
    }

    return 0;
}