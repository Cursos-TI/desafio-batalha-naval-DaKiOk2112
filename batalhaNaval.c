#include <stdio.h>

int main() 
{
    char menu_letras;

    int tabuleiro[10][10],
        coordenada_x, 
        coordenada_y,
        coordenada_x_navio, 
        coordenada_y_navio,
        coordenada_x_especial,
        coordenada_y_especial;



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

    coordenada_x_navio = 6;
    coordenada_y_navio = 2;

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



        //ÁREA PARA COLOCAR O NAVIO NA DIAGONAL DIREITA

    coordenada_x_navio = 1;
    coordenada_y_navio = 4;

    if ((coordenada_x_navio > 0) && (coordenada_x_navio <= 8) && (coordenada_y_navio > 0) && (coordenada_y_navio <= 8))
    {
        for (int q_campos = 0; q_campos < 3; q_campos++)
        {
            if (tabuleiro[coordenada_x_navio - 1 + q_campos][coordenada_y_navio - 1 + q_campos] == 3)
            {
                printf("Já existe um navio neste lugar! \n");
                printf("\n");
                return 0;
            }
        }
        for (int q_campos = 0; q_campos < 3; q_campos++)
        {
            tabuleiro[coordenada_x_navio - 1 + q_campos][coordenada_y_navio - 1 + q_campos] = 3;
        }
    }else
    {
        printf("Navio fora do tabuleiro! \n");
        printf("\n");
        return 0;
    }
    printf("\n");


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

        //ÁREA PARA COLOCAR O NAVIO NA DIAGONAL ESQUERDA

    coordenada_x_navio = 9;
    coordenada_y_navio = 7;

    if ((coordenada_x_navio > 3) && (coordenada_x_navio <= 10) && (coordenada_y_navio > 0) && (coordenada_y_navio <= 8))
    {
        for (int q_campos = 0; q_campos < 3; q_campos++)
        {
            if (tabuleiro[coordenada_x_navio - 1 - q_campos][coordenada_y_navio - 1 + q_campos] == 3)
            {
                printf("Já existe um navio neste lugar! \n");
                printf("\n");
                return 0;
            }
        }
        for (int q_campos = 0; q_campos < 3; q_campos++)
        {
            tabuleiro[coordenada_x_navio - 1 - q_campos][coordenada_y_navio - 1 + q_campos] = 3;
        }
    }else
    {
        printf("Navio fora do tabuleiro! \n");
        printf("\n");
        return 0;
    }
    printf("\n");


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


            //ÁREA DE CRIAÇÃO DO CONE
    
    coordenada_x_especial = 3;
    coordenada_y_especial = 1;

    tabuleiro[coordenada_x_especial - 1][coordenada_y_especial - 1] = 4;
    for (int q_campos = 0; q_campos < 3; q_campos++)
    {
        tabuleiro[coordenada_x_especial - 1 - 1 + q_campos][coordenada_y_especial - 1 + 1] = 4;
    }
    for (int q_campos = 0; q_campos < 5; q_campos++)
    {
        tabuleiro[coordenada_x_especial - 1 - 2 + q_campos][coordenada_y_especial - 1 + 2] = 4;
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

    
            //ÁREA DE CRIAÇÃO DA CRUZ
    
    coordenada_x_especial = 4;
    coordenada_y_especial = 6;

    tabuleiro[coordenada_x_especial - 1][coordenada_y_especial - 1 - 1] = 5;
    tabuleiro[coordenada_x_especial - 1][coordenada_y_especial - 1 + 1] = 5;
    for (int q_campos = -2; q_campos < 3; q_campos++)
    {
        tabuleiro[coordenada_x_especial - 1 + q_campos][coordenada_y_especial - 1] = 5;
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

            //ÁREA DE CRIAÇÃO DO OCTAEDRO
    
    coordenada_x_especial = 8;
    coordenada_y_especial = 8;

    tabuleiro[coordenada_x_especial - 1][coordenada_y_especial - 1] = 7;
    tabuleiro[coordenada_x_especial - 1][coordenada_y_especial - 1 -1] = 7;
    tabuleiro[coordenada_x_especial - 1 - 1][coordenada_y_especial - 1] = 7;
    tabuleiro[coordenada_x_especial - 1 + 1][coordenada_y_especial - 1] = 7;
    tabuleiro[coordenada_x_especial - 1][coordenada_y_especial - 1 + 1] = 7;


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

    printf("*********************** \n");
    printf("****FIM DE JOGO!!!!**** \n");
    printf("*********************** \n");

    printf("\n");

    return 0;
}
    
    