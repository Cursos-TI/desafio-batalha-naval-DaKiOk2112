#include <stdio.h>

int main() 
{
    char menu_letras;

    int tabuleiro[10][10],
        coordenada_x, 
        coordenada_y,
        coordenada_x_navio, 
        coordenada_y_navio;



        //ÁREA DE CRIAÇÃO DO TABULEIRO (INICIALIZAÇÃO DAS VARIÁVEIS)

    for (coordenada_y = 0; coordenada_y < 10; coordenada_y++)
    {
        for (coordenada_x = 0; coordenada_x < 10; coordenada_x++)
        {
            tabuleiro[coordenada_x][coordenada_y] = 0;
        }
    }


        //ÁREA PARA MOSTRAR O TABULEIRO DO JOGO INICIALIZADO

    printf("  ");
    for (char i = 'A'; i < 'K'; i++)
    {
        printf("%c ", i);
    }
    printf("\n");
    for (coordenada_y = 0; coordenada_y < 10; coordenada_y++)
    {
        printf("%d ", coordenada_y + 1);
        for (coordenada_x = 0; coordenada_x < 10; coordenada_x++)
        {
            printf("%d ", tabuleiro[coordenada_x][coordenada_y]);
        }
        printf("\n");
    }
    printf("\n");


        //ÁREA PARA COLOCAR O NAVIO NA HORIZONTAL

    coordenada_x_navio = 5;
    coordenada_y_navio = 4;

    if ((coordenada_x_navio >= 1 && coordenada_x_navio <= 8) && (coordenada_y_navio >= 1 && coordenada_y_navio <= 10))
    {
        for (int q_campos = 0; q_campos < 3; q_campos++)
        {
            if (tabuleiro[coordenada_x_navio - 1 + q_campos][coordenada_y_navio - 1] == 3)
            {
                printf("Já existe um navio neste lugar! \n");
                printf("\n");
                return 0;
            }
        }
        
        for (int q_campos = 0; q_campos < 3; q_campos++)
        {
            tabuleiro[coordenada_x_navio - 1 + q_campos][coordenada_y_navio - 1] = 3;
        }
    }else
        {
            printf("Navio fora do tabuleiro! \n");
            printf("\n");
            return 0;
        }

        //ÁREA PARA MOSTRAR O TABULEIRO

    printf("  ");
    for (char i = 'A'; i < 'K'; i++)
    {
        printf("%c ", i);
    }
    printf("\n");
    for (coordenada_y = 0; coordenada_y < 10; coordenada_y++)
    {
        printf("%d ", coordenada_y + 1);
        for (coordenada_x = 0; coordenada_x < 10; coordenada_x++)
        {
            printf("%d ", tabuleiro[coordenada_x][coordenada_y]);
        }
        printf("\n");
    }
    printf("\n");



        //ÁREA PARA COLOCAR O NAVIO NA VERTICAL

    coordenada_x_navio = 2;
    coordenada_y_navio = 7;

    if ((coordenada_x_navio >= 1 && coordenada_x_navio <= 10) && (coordenada_y_navio >= 1 && coordenada_y_navio <= 8))
    {
        for (int q_campos = 0; q_campos < 3; q_campos++)
        {
            if (tabuleiro[coordenada_x_navio - 1][coordenada_y_navio - 1 + q_campos] == 3)
            {
                printf("Já existe um navio neste lugar! \n");
                printf("\n");
                return 0;
            }
        }
        
        for (int q_campos = 0; q_campos < 3; q_campos++)
        {
            tabuleiro[coordenada_x_navio - 1][coordenada_y_navio - 1 + q_campos] = 3;
        }
    }else
        {
            printf("Navio fora do tabuleiro! \n");
            printf("\n");
            return 0;
        }

        
        //ÁREA PARA MOSTRAR O TABULEIRO

    printf("  ");
    for (char i = 'A'; i < 'K'; i++)
    {
        printf("%c ", i);
    }
    printf("\n");
    for (coordenada_y = 0; coordenada_y < 10; coordenada_y++)
    {
        printf("%d ", coordenada_y + 1);
        for (coordenada_x = 0; coordenada_x < 10; coordenada_x++)
        {
            printf("%d ", tabuleiro[coordenada_x][coordenada_y]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
    
    