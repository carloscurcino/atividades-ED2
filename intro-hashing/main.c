#include <stdio.h>
#include <stdlib.h>

int pegaIndice(int chave, int keys)
{
    return chave % (keys * 2);
}

int main()
{
    system("cls");
    int keys = 10, hash[keys], chave = -1;
    int i = 0;
    while (i < keys)
    {
        int index;
        printf("indique a chave\n");
        scanf("%d", &chave);
        index = pegaIndice(chave, keys);
        printf("O index e: %d", index);
        // CRIAR CONDIÇÃo PARA VER SE A POSIÇÃO ESTA OCUPADA E SE ACABOU AS POSIÇÕES DO VETOR

        if (hash[index])
        {
            if (index == keys - 1)
            {
                i = 0;
            }
            else
            {
                i = index;
            }
        }
        hash[index] = chave;
        i++;
    }

    for (int i = 0; i < keys; i++)
    {
        printf("\nA chave: %d esta no indice: %d da hash.\n", hash[i], i);
    }

    return 0;
}
