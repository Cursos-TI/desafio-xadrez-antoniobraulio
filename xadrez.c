#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    //     NIVEL NOVATO CONCLUIDO

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    //Declaracao e inicializacao das variaveis
    char* nomePeca = "Peca a mover";
    int paraCima = 0;
    int paraBaixo = 0;
    int paraDireita = 0;
    int paraEsquerda = 0;
    int paraCimaDireita = 0;
    int paraCimaEsquerda = 0;
    int paraBaixoDireita = 0;
    int paraBaixoEsquerda = 0;
    int paraDireitaCima = 0;
    int paraDireitaBaixo = 0;
    int paraEsquerdaCima = 0;
    int paraEsquerdaBaixo = 0;
    int opcaoPeca = 0;
    int opcaoMovimeto = 0;

    //Menu para escolha da peca a mover
    do
    {
        //Definicao da peca a ser movimentada
        printf("\nSelecione a peca a ser movimentada:\n");
        printf("1 - Rainha\n");
        printf("2 - Torre\n");
        printf("3 - Bispo\n");
        printf("4 - Cavalo\n");
        printf("5 - Sair do jogo\n");
        printf("Opcao: ");
        scanf("%d",&opcaoPeca);
    
        //Definicao da direcao e sentido do movimento
        switch (opcaoPeca)
        {
            case 1:
                do
                {
                    printf("\nSelecione a direcao e sentido do movimento da Rainha:\n");
                    printf("1 - Para cima\n");
                    printf("2 - Para baixo\n");
                    printf("3 - Para a direita\n");
                    printf("4 - Para a esquerda\n");
                    printf("5 - Na diagonal para cima e a direita\n");
                    printf("6 - Na diagonal para cima e a esquerda\n");
                    printf("7 - Na diagonal para baixo e a direita\n");
                    printf("8 - Na diagonal para baixo e a esquerda\n");
                    printf("9 - Escolher outra peca\n");
                    printf("Opcao: ");
                    scanf("%d",&opcaoMovimeto);

                    //Definicao da quantidade de movimento
                    if(opcaoMovimeto < 9)
                    {
                        printf("\nInforme o numero de 'casas' a mover: ");
                    }
                    switch (opcaoMovimeto)
                    {
                        case 1:
                            scanf("%d",&paraCima);
                            printf("\n");
                            for(int i = 1; i <= paraCima; i++)
                            {
                                printf("Rainha move para cima\n");
                            }
                                //opcaoMovimeto = 0;
                            break;
                        case 2:
                            scanf("%d",&paraBaixo);
                            printf("\n");
                            for(int i = 1; i <= paraBaixo; i++)
                            {
                                printf("Rainha move para baixo\n");
                            }
                            break;
                        case 3:
                            scanf("%d",&paraDireita);
                            printf("\n");
                            for(int i = 1; i <= paraDireita; i++)
                            {
                                printf("Rainha move para direita\n");
                            }
                            break;
                        case 4:
                            scanf("%d",&paraEsquerda);
                            printf("\n");
                            for(int i = 1; i <= paraEsquerda; i++)
                            {
                                printf("Rainha move para esqueda\n");
                            }
                            break;
                        case 5:
                            scanf("%d",&paraCimaDireita);
                            printf("\n");
                            for(int i = 1; i <= paraCimaDireita; i++)
                            {
                                printf("Rainha move para cima e a direita\n");
                            }
                            break;
                        case 6:
                            scanf("%d",&paraCimaEsquerda);
                            printf("\n");
                            for(int i = 1; i <= paraCimaEsquerda; i++)
                            {
                                printf("Rainha move para cima e a esquerda\n");
                            }
                            break;
                        case 7:
                            scanf("%d",&paraBaixoDireita);
                            printf("\n");
                            for(int i = 1; i <= paraBaixoDireita; i++)
                            {
                                printf("Rainha move para baixo e a direita\n");
                            }
                            break;
                        case 8:
                            scanf("%d",&paraBaixoEsquerda);
                            printf("\n");
                            for(int i = 1; i <= paraBaixoEsquerda; i++)
                            {
                                printf("Rainha move para baixo e a esquerda\n");
                            }
                            break;
                        case 9:
                            printf("Escolha outra peca.");
                            opcaoMovimeto = 0;
                            opcaoPeca = 6;
                            break;           
                        default:
                            printf("Escolha errada, deve ser entre 1 e 9.\n");
                            opcaoMovimeto = 10;
                            opcaoPeca = 6;
                            break;
                    }
                } while (opcaoMovimeto != 0);
                break;
            case 2:
                do
                {
                    printf("\nSelecione a direcao e sentido do movimento da Torre:\n");
                    printf("1 - Para cima\n");
                    printf("2 - Para baixo\n");
                    printf("3 - Para a direita\n");
                    printf("4 - Para a esquerda\n");
                    printf("5 - Escolher outra peca\n");
                    printf("Opcao: ");
                    scanf("%d",&opcaoMovimeto);

                    //Definicao da quantidade de movimento
                    if(opcaoMovimeto < 5)
                    {
                        printf("\nInforme o numero de 'casas' a mover: ");
                    }
                    switch (opcaoMovimeto)
                    {
                        case 1:
                            scanf("%d",&paraCima);
                            printf("\n");
                            for(int i = 1; i <= paraCima; i++)
                            {
                                printf("Torre move para cima\n");
                            }
                                //opcaoMovimeto = 0;
                            break;
                        case 2:
                            scanf("%d",&paraBaixo);
                            printf("\n");
                            for(int i = 1; i <= paraBaixo; i++)
                            {
                                printf("Torre move para baixo\n");
                            }
                            break;
                        case 3:
                            scanf("%d",&paraDireita);
                            printf("\n");
                            for(int i = 1; i <= paraDireita; i++)
                            {
                                printf("Torre move para direita\n");
                            }
                            break;
                        case 4:
                            scanf("%d",&paraEsquerda);
                            printf("\n");
                            for(int i = 1; i <= paraEsquerda; i++)
                            {
                                printf("Rainha move para esqueda\n");
                            }
                            break;
                        case 5:
                            printf("Escolha outra peca.");
                            opcaoMovimeto = 0;
                            opcaoPeca = 6;
                            break;           
                        default:
                            printf("Escolha errada, deve ser entre 1 e 5.\n");
                            opcaoMovimeto = 6;
                            opcaoPeca = 6;
                            break;
                    }
                } while (opcaoMovimeto != 0);
                break;
            case 3:
                do
                {
                    printf("\nSelecione a direcao e sentido do movimento do Bispo:\n");
                    printf("1 - Na diagonal para cima e a direita\n");
                    printf("2 - Na diagonal para cima e a esquerda\n");
                    printf("3 - Na diagonal para baixo e a direita\n");
                    printf("4 - Na diagonal para baixo e a esquerda\n");
                    printf("5 - Escolher outra peca\n");
                    printf("Opcao: ");
                    scanf("%d",&opcaoMovimeto);

                    //Definicao da quantidade de movimento
                    if(opcaoMovimeto < 5)
                    {
                        printf("\nInforme o numero de 'casas' a mover: ");
                    }
                    switch (opcaoMovimeto)
                    {
                        case 1:
                            scanf("%d",&paraCimaDireita);
                            printf("\n");
                            for(int i = 1; i <= paraCimaDireita; i++)
                            {
                                printf("Bispo move para cima e a direita\n");
                            }
                            break;
                        case 2:
                            scanf("%d",&paraCimaEsquerda);
                            printf("\n");
                            for(int i = 1; i <= paraCimaEsquerda; i++)
                            {
                                printf("Bispo move para cima e a esquerda\n");
                            }
                            break;
                        case 3:
                            scanf("%d",&paraBaixoDireita);
                            printf("\n");
                            for(int i = 1; i <= paraBaixoDireita; i++)
                            {
                                printf("Bispo move para baixo e a direita\n");
                            }
                            break;
                        case 4:
                            scanf("%d",&paraBaixoEsquerda);
                            printf("\n");
                            for(int i = 1; i <= paraBaixoEsquerda; i++)
                            {
                                printf("Bispo move para baixo e a esquerda\n");
                            }
                            break;
                        case 5:
                            printf("Escolha outra peca.");
                            opcaoMovimeto = 0;
                            opcaoPeca = 5;
                            break;           
                        default:
                            printf("Escolha errada, deve ser entre 1 e 5.\n");
                            opcaoMovimeto = 6;
                            opcaoPeca = 6;
                            break;
                    }
                } while (opcaoMovimeto != 0);
                break;
            case 4:
                do
                {
                    printf("\nSelecione a direcao e sentido do movimento do Cavalo:\n");
                    printf("1 - Para cima e a direita\n");
                    printf("2 - Para cima e a esquerda\n");
                    printf("3 - Para a direita e a cima\n");
                    printf("4 - Para a direita e a baixo\n");
                    printf("5 - Para baixo e a direita\n");
                    printf("6 - Para baixo e a esquerda\n");
                    printf("7 - Para a direita e a cima\n");
                    printf("8 - Para a direita e a baixo\n");
                    printf("9 - Escolher outra peca\n");
                    printf("Opcao: ");
                    scanf("%d",&opcaoMovimeto);

                    switch (opcaoMovimeto)
                    {
                        case 1:
                            paraCimaDireita = 2;
                            printf("\n");
                            for(int i = 1; i <= paraCimaDireita; i++)
                            {
                                printf("Cavalo move para cima\n");
                            }
                            printf("Cavalo move para a direita\n");
                            break;
                        case 2:
                            paraCimaEsquerda = 2;
                            printf("\n");
                            for(int i = 1; i <= paraCimaEsquerda; i++)
                            {
                                printf("Cavalo move para cima\n");
                            }
                            printf("Cavalo move para a esquerda\n");
                            break;
                        case 3:
                            paraDireitaCima = 2;
                            printf("\n");
                            for(int i = 1; i <= paraDireitaCima; i++)
                            {
                                printf("Cavalo move para a direita\n");
                            }
                            printf("Cavalo move para cima\n");
                            break;
                        case 4:
                            paraDireitaBaixo = 2;
                            printf("\n");
                            for(int i = 1; i <= paraDireitaBaixo; i++)
                            {
                                printf("Cavalo move para a direita\n");
                            }
                            printf("Cavalo move para baixo\n");
                            break;
                        case 5:
                            paraBaixoDireita = 2;
                            printf("\n");
                            for(int i = 1; i <= paraBaixoDireita; i++)
                            {
                                printf("Cavalo move para baixo\n");
                            }
                            printf("Cavalo move para a direita\n");
                            break;
                        case 6:
                            paraBaixoEsquerda = 2;
                            printf("\n");
                            for(int i = 1; i <= paraBaixoEsquerda; i++)
                            {
                                printf("Cavalo move para baixo\n");
                            }
                            printf("Cavalo move para a esquerda\n");
                            break;
                        case 7:
                            paraDireitaCima = 2;
                            printf("\n");
                            for(int i = 1; i <= paraDireitaCima; i++)
                            {
                                printf("Cavalo move para a direita\n");
                            }
                            printf("Cavalo move para cima\n");
                            break;
                        case 8:
                            paraDireitaBaixo = 2;
                            printf("\n");
                            for(int i = 1; i <= paraDireitaBaixo; i++)
                            {
                                printf("Cavalo move para a direita\n");
                            }
                            printf("Cavalo move para baixo\n");
                            break;
                        case 9:
                            printf("Escolha outra peca.");
                            opcaoMovimeto = 0;
                            opcaoPeca = 6;
                            break;           
                        default:
                            printf("Escolha errada, deve ser entre 1 e 9.\n");
                            opcaoMovimeto = 10;
                            opcaoPeca = 6;
                            break;
                    }
                } while (opcaoMovimeto != 0);
                break;
            case 5:
                printf("Voce escolheu sair do jogo.\n");
                opcaoPeca = 0;
                break;
            default:
                printf("Escolha errada, deve ser entre 1 e 5.\n");
                opcaoPeca = 0;
                break;
        }
    } while (opcaoPeca != 0);

    printf("Jogo encerrado.\n");
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
