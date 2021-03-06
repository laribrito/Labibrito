// BIBLIOTECAS
#include <stdio.h>
#include <time.h>

// CONSTANTES
#define TAMANHO_NOME 20
#define TAMANHO_MSG 100
#define TIMER_MSG 4 // QUANTIDADE DE PASSOS QUE A MENSAGEM FICARÁ NA TELA
#define FUNDO_BRANCO "\x1b[47m"
#define FUNDO_AZUL "\x1b[44;1m"
#define FUNDO_VERMELHO "\x1b[41;1m"
#define FUNDO_AMARELO "\x1b[43;1m"
#define FUNDO_WINDOWS "\x1b[46m"
#define TEXTO_MAGENTA "\x1b[35;1m"
#define TEXTO_VERMELHO "\x1b[31;1m"
#define RESET "\x1b[0m"
#define VIDA_PLAYER 100
// nível 1
#define ALTURA1 23
#define LARGURA1 29
#define POSICAOX1 20
#define POSICAOY1 0
#define POSICAOZ1 0
// nível linux
#define ALTURAL 16
#define LARGURAL 23
#define POSICAOXL 13
#define POSICAOYL 8
#define POSICAOZL 0
// nível windows
#define ALTURAW 25
#define LARGURAW 47
#define POSICAOXW 21
#define POSICAOYW 21

// FUNÇÕES
void limpaTela(){
    system("cls||clear");
}

void limpaBufferEntrada(){
    scanf("%*[^\n]");
    scanf("%*c");
}

void delay (unsigned int Sec){
        clock_t ticks1 = clock(), ticks2 = ticks1;
        while ( ( ticks2/CLOCKS_PER_SEC - ticks1/CLOCKS_PER_SEC ) < Sec)
           ticks2 = clock();
}

void instrucoes(){
    limpaTela();
    printf("\n\n\n\n\n\n\t\t\t .................................................................. \n");
    printf(            "\t\t\t|                                                                  |\n");
    printf(            "\t\t\t|          As teclas W, A, S, D movimentam seu personagem          |\n");
    printf(            "\t\t\t|              Use [ENTER] para confirmar sua direção              |\n");
    printf(            "\t\t\t|                                                                  |\n");
    printf(            "\t\t\t .................................................................. \n\n");
    delay(6);

    limpaTela();
    printf("\n\n\n\n\n\n\t\t\t ............................................................ \n");
    printf(            "\t\t\t|                                                            |\n");
    printf(            "\t\t\t|          Fique de olho na sua vida! Se o contador          |\n");
    printf(            "\t\t\t|                     chegar a 0, ja era!                    |\n");
    printf(            "\t\t\t|                                                            |\n");
    printf(            "\t\t\t ............................................................ \n\n");
    delay(6);
}

void abertura(){
    limpaTela();
    printf("\n\n\n\n\n\n\t\t\t .............................................................. \n");
    printf(            "\t\t\t|                                                              |\n");
    printf(            "\t\t\t|          Dos mesmos desenvolvedores de 'Economize!'          |\n");
    printf(            "\t\t\t|           Seu app mobile para controle de gastos             |\n");
    printf(            "\t\t\t|                                                              |\n");
    printf(            "\t\t\t .............................................................. \n\n");
    delay(6);
    limpaTela();

    printf("\n\n\n\n\n\n\t\t\t .............................................................. \n");
    printf(            "\t\t\t|                                                              |\n");
    printf(            "\t\t\t|                           LABIBRITO                          |\n");
    printf(            "\t\t\t|                 Projeto Final - LP1 - 2022.1                 |\n");
    printf(            "\t\t\t|                                                              |\n");
    printf(            "\t\t\t .............................................................. \n\n");
    delay(6);
    limpaTela();


    printf("\n\n\n\n\n\n\t\t\t .............................................................. \n");
    printf(            "\t\t\t|                                                              |\n");
    printf(            "\t\t\t|          Professora responsavel pela dor de cabeça:          |\n");
    printf(            "\t\t\t|                    Vânia Cordeiro da Silva                   |\n");
    printf(            "\t\t\t|                                                              |\n");
    printf(            "\t\t\t .............................................................. \n\n");
    delay(6);
    limpaTela();


    printf("\n\n\n\n\n\n\t\t\t .............................................................. \n");
    printf(            "\t\t\t|                                                              |\n");
    printf(            "\t\t\t|                       Desenvolvido por:                      |\n");
    printf(            "\t\t\t|                       Larissa de Brito                       |\n");
    printf(            "\t\t\t|                                                              |\n");
    printf(            "\t\t\t .............................................................. \n\n");
    delay(6);
    limpaTela();

}

void gameOver(){
    limpaTela();
    printf("\n\n\n\n\n\n\t\t\t ............................................ \n");
    printf(            "\t\t\t|                                            |\n");
    printf(            "\t\t\t|                 %sGAME OVER%s                  |\n", FUNDO_VERMELHO, RESET);
    printf(            "\t\t\t|              %sTente outra vez!%s              |\n", TEXTO_VERMELHO, RESET);
    printf(            "\t\t\t|                                            |\n");
    printf(            "\t\t\t ............................................ \n\n");
    delay(6);
    limpaTela();
}

void limpaDisplay(char msgA[],char msgB[],char msgC[], int auxMsg){
    if (auxMsg>TIMER_MSG){
        int x;
        for(int x=0; x<TAMANHO_MSG; x++) msgA[x]=' '; 
        msgA[TAMANHO_MSG] = '\0';
        for(int x=0; x<TAMANHO_MSG; x++) msgB[x]=' '; 
        msgB[TAMANHO_MSG] = '\0';
        for(int x=0; x<TAMANHO_MSG; x++) msgC[x]=' '; 
        msgC[TAMANHO_MSG] = '\0';
    }
}

void desistencia(){
    limpaTela();
    printf("\n\n\n\n\n\n\t\t\t\t ................................ \n");
    printf(            "\t\t\t\t|                                |\n");
    printf(            "\t\t\t\t|          F no chat :/          |\n");
    printf(            "\t\t\t\t|             Adeus!             |\n");
    printf(            "\t\t\t\t|                                |\n");
    printf(            "\t\t\t\t ................................\n\n");
}

void nivelEscondidoIntro(){
    limpaTela();
    printf("\n\n\n\n\n\n\t\t ........................................................................ \n");
    printf(            "\t\t|                                                                        |\n");
    printf(            "\t\t|               Parabens! Voce encontrou um nível encondido!             |\n");
    printf(            "\t\t|          Chegue ate o outro lado com vida, se voce for capaz!          |\n");
    printf(            "\t\t|                               Boa sorte!                               |\n");
    printf(            "\t\t|                                                                        |\n");
    printf(            "\t\t ........................................................................ \n\n");
    delay(6);
    instrucoes();
}

// INICIO
int main(void){
    // MENSAGENS DE ERRO
    char msgErro0[]="Nao e assim que você vai ganhar ;-;";
    char msgErro1[]="Não ve que isso e uma parede?";
    char msgErro2[]="Cuidado por onde anda.";
    char msgErro3[]="Precisas de oculos?";
    char msgErro4[]="Nao ha atalhos nas paredes...";
    // MENSAGENS DE DANO
    char msgDano1A[]="Enquanto defendia seu cliente no tribunal, atirou em si mesmo sem querer!";
    char msgDano1AW[]="DISCO 100%. Não consegue fazer mais nada!";
    char msgDano2A[]="Seu cabelo cresceu tanto que você tropecou nele e quebrou a perna.";
    char msgDano2AW[]="MEMORIA RAM 100%. Não consegue abrir mais nada!";
    char msgDano3A[]="Voce resolveu comer um peixe vivo. Isso nao acabou bem, pois se engasgou e foi parar no hospital.";
    char msgDano3AW[]="Seu HD explodiu de tanto arquivo gravado! Só metade era o sistema...";
    char msgDano4A[]="Esse caminho e assustador...";
    char msgDano4AW[]="Seu processador fritou. Tente mudar de sistema para melhor funcionamento!";
    char msgDano5A[]="BOOM!! Campo minadoooooooo!";
    char msgDano6A[]="AAAAAAAAAAAAAAAAAAA!!!";
    char msgDano7A[]="Mais minaaaaaaaaaas!!!!";
    char msgDano8A[]="Pare de esbarrar por ai!";
    char msgDano9A[]="Voce tentou ajudar uma pessoa e acabou tomando um baita choque.";
    char msgDano10A[]="Voce resolveu \"brincar\" de roleta-russa com uma pistola semi-automatica.";
    char msgDano5B[]="-5 de vida";
    char msgDano10B[]="-10 de vida";
    char msgDano20B[]="-20 de vida";
    char msgDano30B[]="-30 de vida";
    char msgDanoIB[]="MORTE INSTANTÂNEA";
    char msgDanoC[]="Aperte [ENTER] para continuar";
    // MENSAGENS DO JOGO
    char msg0[]="Boa Sorte.. Sorte.. Sorte... (eco)";
    char msg0L[]="É só chegar até o outro lado...";
    char msg0W[]="Você que lute para sair dessa! :)";
    char msg1[]="Tenho quase certeza de que não e por ai...";
    char msg1W[]="DISCO 98%...";
    char msg2[]="E por ai, confia! : )";
    char msg2W[]="MEMORIA RAM 98%...";
    char msg3[]="Que belo senso de direcao você tem! '-'";
    char msg3W[]="Armazenamento quase cheio...";
    char msg4[]="Voce gosta de insistir no erro! ;-;";
    char msg4W[]="CPU 80%...";
    char msg5[]="Esta frio... HAHA";
    char msg6[]="Se esta procurando meu easter egg, esta indo pelo lugar errado.";
    char msg7[]="Acho que sua bussola está quebrada... HAHAHA";
    char msg8[]="Tem certeza disso?";
    char msg9[]="Sera que essa e realmente a saída?";
    char msg10[]="Seu freio esta quebrado e? Quer ajuda?";
    // OUTRAS CONFIGURAÇÕES
    char opc, 
        //as linhas do display
        msgA[TAMANHO_MSG+1]=" ",
        msgB[TAMANHO_MSG+1]=" ",
        msgC[TAMANHO_MSG+1]=" ";
    char nome[TAMANHO_NOME+1];
    int aux, auxMsg, vida, posicaoJogadorX, posicaoJogadorY, posicaoJogadorZ; //como o caracter do labirinto tem 2 de largura, 'posicaoJogadorZ' auxilia o posicionamento do personagem

    // abertura();
    do{
        // MENU PRINCIPAL
        limpaTela();
        printf("\n\n\n\n\n\n\t\t\t\t            LABIBRITO             \n");
        printf(            "\t\t\t\t ................................ \n");
        printf(            "\t\t\t\t|                                |\n");
        printf(            "\t\t\t\t|          1 - Nivel um          |\n");
        printf(            "\t\t\t\t|            0 - sair            |\n");
        printf(            "\t\t\t\t|                                |\n");
        printf(            "\t\t\t\t ................................ \n\n");
        printf(            "\t\t\t\t       > ");
        scanf("%c", &opc);
        limpaBufferEntrada();
        
        if(opc=='1'){
            /*
                0 - jogador
                1 - parede
                2 - espaço em branco
                22 - saída
                10x - alguma frase
                11X - algum obstáculo
                obs.: cada caracter tem 1 de altura e 2 de largura 
            */
            int mapa[ALTURA1][LARGURA1]={
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                {1,2,102,2,2,2,2,2,2,2,2,2,1,2,1,2,2,2,2,2,2,2,2,2,1,2,2,2,1},
                {1,2,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,1,1,2,1,2,1,1,1,2,1,1,1},
                {1,2,2,2,2,2,1,2,2,2,1,104,2,2,1,2,2,2,1,2,1,2,1,2,2,2,1,2,1},
                {1,2,1,1,1,2,1,2,1,2,1,1,1,2,1,1,1,2,1,2,1,1,1,2,1,1,1,2,1},
                {1,2,1,2,1,2,2,2,1,2,1,2,1,2,1,2,2,2,1,2,2,2,2,2,1,2,2,2,1},
                {1,2,1,2,1,1,1,1,1,2,1,2,1,2,1,2,1,1,1,1,1,1,1,1,1,2,1,2,1},
                {1,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,1,2,2,2,108,2,2,2,1,2,1},
                {1,2,1,2,1,2,1,2,1,113,1,1,1,1,1,1,1,2,1,1,1,2,1,1,1,1,1,2,1},
                {1,2,1,2,1,2,1,2,1,2,1,2,2,2,2,2,1,2,107,2,2,2,2,2,1,2,1,2,1},
                {1,2,1,2,1,2,1,2,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,2,1,2,1,2,1},
                {1,2,1,2,1,2,1,2,2,2,2,2,1,2,1,2,2,2,1,2,1,119,2,2,1,2,2,2,1},
                {1,2,1,1,1,2,1,1,1,1,1,1,1,2,1,2,1,1,1,2,1,2,1,1,1,2,1,1,1},
                {1,2,2,2,1,2,103,2,2,2,2,2,114,2,1,2,2,2,2,2,1,2,1,2,2,2,109,2,1},
                {1,1,1,2,1,2,1,2,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,2,22},
                {1,2,2,2,1,2,1,112,1,2,2,2,1,2,1,2,2,2,2,2,106,2,2,2,1,2,2,1010,1},
                {1,2,1,1,1,1,1,2,1,1,1,2,1,2,1,1,1,1,1,1,1,1,1,2,1,1110,1,1,1},
                {1,2,111,2,1,2,1,2,2,2,1,2,1,2,115,2,116,2,117,2,1,2,2,2,1,2,2,2,1},
                {1,2,1,1,1,2,1,2,1,2,1,2,1,1,1,1,1,1,1,2,1,2,1,1,1,1,1,2,1},
                {1,2,2,2,101,2,1,2,1,2,1,2,2,2,1,2,2,2,1,2,1,2,1,2,2,2,2,2,1},
                {2,2,1,1,1,1,1,1,1,2,1,2,1,1,1,2,1,2,1,2,1,2,1,2,1,1,1,1,1},
                {1,2,2,2,2,2,2,2,2,2,1,2,2,2,2,2,1,105,2,2,2,118,1,2,2,2,2,2,1},
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            };
            posicaoJogadorX=POSICAOX1, posicaoJogadorY=POSICAOY1, posicaoJogadorZ=POSICAOZ1, vida=VIDA_PLAYER, auxMsg=TIMER_MSG;
            limpaDisplay(msgA, msgB, msgC, auxMsg);
            // mensagem da linha A
            int x;
            for(x=0; msg0[x]!='\0'; x++) msgA[x]=msg0[x]; 
            msgA[x] = '\0';
            auxMsg=1; //mensagens que devem durar

            //REGRAS DO JOGO - NIVEL 1
            limpaTela();
            printf("\n\n\n\n\n\n\t\t .................................................................................... \n");
            printf(            "\t\t|                                                                                    |\n");
            printf(            "\t\t|                 Parabens! Você acaba de entrar no labirinto nivel 1.               |\n");
            printf(            "\t\t|          Procure a saida, sobrevivendo a 'seja lá o que' reina nesse mapa          |\n");
            printf(            "\t\t|                                     Boa sorte!                                     |\n");
            printf(            "\t\t|                                                                                    |\n");
            printf(            "\t\t .................................................................................... \n\n");
            delay(6);
            instrucoes();
            // RECEBE O NOME DO USUÁRIO
            limpaTela();
            printf("\n\n\n\n\n\n\t\t\t\t ........................................ \n");
            printf(            "\t\t\t\t|                                        |\n");
            printf(            "\t\t\t\t|       Informe o nome do jogador:       |\n");
            printf(            "\t\t\t\t|                                        |\n");
            printf(            "\t\t\t\t ........................................\n\n");
            printf(            "\t\t\t\t       > ");
            scanf("%20[^\n]s", nome);
            limpaBufferEntrada();

            // INICIO DO JOGO - NIVEL 1
            do{
                limpaTela();
                // atributos do jogador
                printf("\n");
                printf("\t\t " FUNDO_VERMELHO "%d <3" RESET "\t\t\t\t\t\t\t\t" FUNDO_AZUL "%s" RESET "\t\t\n", vida, nome);
                printf("\n");
                //exibe o mapa
                mapa[posicaoJogadorX][posicaoJogadorY]=0; // coloca o personagem na posição adequada
                for(int x=0; x<ALTURA1; x++){
                    printf("\t\t\t"); // Espaçamento lateral do labirinto
                    for(int y=0; y<LARGURA1; y++){
                        if (mapa[x][y]==1){
                            printf(FUNDO_BRANCO"  "RESET); //parede
                        } else if(mapa[x][y]==2)
                            printf("  "); //corredor
                            else if(mapa[x][y]==0){
                                if (posicaoJogadorZ==0){
                                    printf(TEXTO_MAGENTA"0 "RESET);
                                } else {
                                    printf(TEXTO_MAGENTA" 0"RESET);
                                } 
                            } else {
                                    // limpa os rastros do personagem
                                    printf("  ");
                            }
                    }
                    printf("\n");
                }
                
                // display para exibir mensagens
                printf("\n");
                printf("\t       .......................................................................\n");
                printf("\t       | \n");
                printf("\t       | %s\n", msgA);
                printf("\t       | %s\n", msgB);
                printf("\t       | %s\n", msgC);
                printf("\t       | \n");
                printf("\t       .......................................................................\n");

                // TESTA A VIDA DO JOGADOR - NÍVEL 1
                if (vida>0){
                    printf("\n\t    \x1b[4mDIGITE 0 PARA VOLTAR AO MENU PRINCIPAL\x1b[0m \t\t \x1b[4mDIGITE F PARA FECHAR O JOGO\x1b[0m\n");
                    printf("\n");
                    // recebe a opção do jogador
                    printf("\t\t> ");
                    scanf("%c", &opc);
                    limpaBufferEntrada();
                } else {
                    printf("\n\t\t%sAcho que a sorte nao esta a seu favor...%s\n\n", FUNDO_VERMELHO, RESET);
                    limpaBufferEntrada();
                    gameOver();
                    opc='0';
                }

                // TESTA A OPÇÃO DO JOGADOR - NIVEL 1
                if (opc=='F'){
                    desistencia();
                    return 0;
                } else if(opc=='0'){
                    // RECONFIGURAÇÕES                    
                    // tira o jogador do mapa
                    mapa[posicaoJogadorX][posicaoJogadorY]=2;
                    //limpa a caixa de mensagem
                    limpaDisplay(msgA, msgB, msgC, auxMsg);

                // MOVIMENTAÇÃO DO JOGADOR
                } else if (opc=='d' || opc=='D'){
                    aux=mapa[posicaoJogadorX][posicaoJogadorY+1];
                    // testa no mapa
                    if(aux==1 && posicaoJogadorZ==1){
                        //não anda
                        int x;
                        for(x=0; msgErro1[x]!='\0'; x++){
                            msgA[x]=msgErro1[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else {
                        //anda
                        mapa[posicaoJogadorX][posicaoJogadorY]=2; //limpa a posição atual
                        if(posicaoJogadorZ==1){
                            posicaoJogadorY++;
                            posicaoJogadorZ=0;
                        } else {
                            posicaoJogadorZ++;
                        }
                        limpaDisplay(msgA, msgB, msgC, auxMsg);
                    }
                } else if (opc=='a' || opc=='A'){
                    aux=mapa[posicaoJogadorX][posicaoJogadorY-1];
                    // testa o mapa
                    if(posicaoJogadorX==POSICAOX1 && posicaoJogadorY==POSICAOY1 && posicaoJogadorZ==POSICAOZ1){
                        //não anda
                        int x;
                        for(x=0; msgErro0[x]!='\0'; x++){
                            msgA[x]=msgErro0[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else if(aux==1 && posicaoJogadorZ==0){
                        //não anda
                        int x;
                        for(x=0; msgErro2[x]!='\0'; x++){
                            msgA[x]=msgErro2[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else {
                        //anda
                        mapa[posicaoJogadorX][posicaoJogadorY]=2; //limpa a posição atual
                        if(posicaoJogadorZ==0){
                            posicaoJogadorY--;
                            posicaoJogadorZ=1;
                        } else {
                            posicaoJogadorZ--;
                        }
                        //limpa a caixa de mensagem
                        limpaDisplay(msgA, msgB, msgC, auxMsg);
                    }
                } else if (opc=='w' || opc=='W'){
                    aux=mapa[posicaoJogadorX-1][posicaoJogadorY];
                    // testa o mapa
                    if(aux==1){
                        //não anda
                        int x;
                        for(x=0; msgErro3[x]!='\0'; x++){
                            msgA[x]=msgErro3[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else {
                        //anda
                        mapa[posicaoJogadorX][posicaoJogadorY]=2; //limpa a posição atual 
                        posicaoJogadorX--;
                        //limpa a caixa de mensagem
                        limpaDisplay(msgA, msgB, msgC, auxMsg);
                    }
                } else if (opc=='s' || opc=='S'){
                    aux=mapa[posicaoJogadorX+1][posicaoJogadorY];
                    // testa o mapa
                    if(aux==1){
                        //não anda
                        int x;
                        for(x=0; msgErro4[x]!='\0'; x++){
                            msgA[x]=msgErro4[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else {
                        //anda
                        mapa[posicaoJogadorX][posicaoJogadorY]=2; //limpa a posição atual 
                        posicaoJogadorX++;
                        //limpa a caixa de mensagem
                        limpaDisplay(msgA, msgB, msgC, auxMsg);
                    }
                } 
                
                // MENSAGENS DO JOGO
                aux=mapa[posicaoJogadorX][posicaoJogadorY];
                if (aux==101){
                    int x;
                    for(x=0; msg1[x]!='\0'; x++){
                            msgA[x]=msg1[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                } else if (aux==102){
                    int x;
                    for(x=0; msg2[x]!='\0'; x++){
                            msgA[x]=msg2[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                } else if (aux==103){
                    int x;
                    for(x=0; msg3[x]!='\0'; x++){
                            msgA[x]=msg3[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                } else if (aux==104){
                    int x;
                    for(x=0; msg4[x]!='\0'; x++){
                            msgA[x]=msg4[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                } else if (aux==105){
                    int x;
                    for(x=0; msg5[x]!='\0'; x++){
                            msgA[x]=msg5[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                } else if (aux==106){
                    int x;
                    for(x=0; msg6[x]!='\0'; x++){
                            msgA[x]=msg6[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                }  else if (aux==107){
                    int x;
                    for(x=0; msg7[x]!='\0'; x++){
                            msgA[x]=msg7[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                } else if (aux==108){
                    int x;
                    for(x=0; msg8[x]!='\0'; x++){
                            msgA[x]=msg8[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                } else if (aux==109){
                    int x;
                    for(x=0; msg9[x]!='\0'; x++){
                            msgA[x]=msg9[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                } else if (aux==1010){
                    int x;
                    for(x=0; msg10[x]!='\0'; x++){
                            msgA[x]=msg10[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                // OBSTÁCULOS
                } else if(aux==111){
                    // fatality
                    int x;
                    for(x=0; msgDano1A[x]!='\0'; x++){
                            msgA[x]=msgDano1A[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDanoIB[x]!='\0'; x++){
                            msgB[x]=msgDanoIB[x];
                    }
                    msgB[x]='\0';

                    for(x=0; msgDanoC[x]!='\0'; x++){
                            msgC[x]=msgDanoC[x];
                    }
                    msgC[x]='\0';
                    vida=0;
                } else if(aux==112){
                    limpaDisplay(msgA, msgB, msgC, TIMER_MSG);
                    int x;
                    for(x=0; msgDano2A[x]!='\0'; x++){
                            msgA[x]=msgDano2A[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDano10B[x]!='\0'; x++){
                            msgB[x]=msgDano10B[x];
                    }
                    msgB[x]='\0';
                    vida-=10;

                } else if(aux==113){
                    limpaDisplay(msgA, msgB, msgC, TIMER_MSG);
                    int x;
                    for(x=0; msgDano3A[x]!='\0'; x++){
                            msgA[x]=msgDano3A[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDano10B[x]!='\0'; x++){
                            msgB[x]=msgDano10B[x];
                    }
                    msgB[x]='\0';
                    vida-=10;

                } else if(aux==114){
                    limpaDisplay(msgA, msgB, msgC, TIMER_MSG);
                    int x;
                    for(x=0; msgDano4A[x]!='\0'; x++){
                            msgA[x]=msgDano4A[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDano5B[x]!='\0'; x++){
                            msgB[x]=msgDano5B[x];
                    }
                    msgB[x]='\0';
                    vida-=5; 

                } else if(aux==115){
                    limpaDisplay(msgA, msgB, msgC, TIMER_MSG);
                    int x;
                    for(x=0; msgDano5A[x]!='\0'; x++){
                            msgA[x]=msgDano5A[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDano20B[x]!='\0'; x++){
                            msgB[x]=msgDano20B[x];
                    }
                    msgB[x]='\0';
                    vida-=20; 
                } else if(aux==116){
                    limpaDisplay(msgA, msgB, msgC, TIMER_MSG);
                    int x;
                    for(x=0; msgDano6A[x]!='\0'; x++){
                            msgA[x]=msgDano6A[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDano20B[x]!='\0'; x++){
                            msgB[x]=msgDano20B[x];
                    }
                    msgB[x]='\0';
                    vida-=20; 
                } else if(aux==117){
                    limpaDisplay(msgA, msgB, msgC, TIMER_MSG);
                    int x;
                    for(x=0; msgDano7A[x]!='\0'; x++){
                            msgA[x]=msgDano7A[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDano20B[x]!='\0'; x++){
                            msgB[x]=msgDano20B[x];
                    }
                    msgB[x]='\0';
                    vida-=20;

                } else if(aux==118){
                    limpaDisplay(msgA, msgB, msgC, TIMER_MSG);
                    int x;
                    for(x=0; msgDano8A[x]!='\0'; x++){
                            msgA[x]=msgDano8A[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDano5B[x]!='\0'; x++){
                            msgB[x]=msgDano5B[x];
                    }
                    msgB[x]='\0';
                    vida-=5;

                } else if(aux==119){
                    limpaDisplay(msgA, msgB, msgC, TIMER_MSG);
                    int x;
                    for(x=0; msgDano9A[x]!='\0'; x++){
                            msgA[x]=msgDano9A[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDano20B[x]!='\0'; x++){
                            msgB[x]=msgDano20B[x];
                    }
                    msgB[x]='\0';
                    vida-=20;

                } else if(aux==1110){
                    // fatality
                    limpaDisplay(msgA, msgB, msgC, TIMER_MSG);
                    int x;
                    for(x=0; msgDano10A[x]!='\0'; x++){
                            msgA[x]=msgDano10A[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDanoIB[x]!='\0'; x++){
                            msgB[x]=msgDanoIB[x];
                    }
                    msgB[x]='\0';
                    vida=0;

                    for(x=0; msgDanoC[x]!='\0'; x++){
                            msgC[x]=msgDanoC[x];
                    }
                    msgC[x]='\0';
                    vida=0;     

                // FIM DE JOGO
                } else if (aux==22){
                    limpaTela();
                    printf("\n\n\n\n\n\n\t\t\t\t ........................................................................ \n");
                    printf(            "\t\t\t\t|                                                                        |\n");
                    printf(            "\t\t\t\t|                     Parabens! Nivel 1 finalizado!                      |\n");
                    printf(            "\t\t\t\t|              \x1b[4mAPERTE [ENTER] PARA VOLTAR AO MENU PRINCIPAL\x1b[0m              |\n");
                    printf(            "\t\t\t\t|                     \x1b[4mDIGITE Uhuhh PARA FECHAR O JOGO\x1b[0m                    |\n");
                    printf(            "\t\t\t\t|                                                                        |\n");
                    printf(            "\t\t\t\t ........................................................................\n\n");
                    printf(            "\t\t\t\t       > ");
                    char opcFinal[6], final[]="Uhuhh";
                    scanf("%5[^\n]s", opcFinal);
                    limpaBufferEntrada();
                    for(int x=0; final[x]!='\0'; x++){
                        if(final[x]!=opcFinal[x]){
                            opc='0';
                            break;
                        }
                    }
                    if (opc!='0') return 0;
                }
                auxMsg++;
                limpaTela();
            }while(opc!='0');
            opc=' '; //para o segundo laço não parar
        } else if (opc=='l'){
            /*
                0 - jogador
                1 - parede branca
                2 - espaço em branco
                3 - parede amarela
                22 - saída
            */
            int mapa[ALTURAL][LARGURAL]={
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,2,2,2,2,2,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,2,2,1,2,1,2,2,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,2,1,3,3,3,1,2,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,2,2,1,1,1,3,1,1,1,2,2,1,1,1,1,1,1},
                    {1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1},
                    {1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1},
                    {1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1},
                    {1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1},
                    {1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1},
                    {1,1,1,3,3,2,1,1,1,1,1,1,1,1,1,1,1,2,2,3,1,1,1},
                    {1,3,3,3,3,3,3,2,1,1,1,1,1,1,1,2,3,3,3,3,3,3,1},
                    {1,3,3,3,3,3,3,3,2,1,1,1,1,1,22,3,3,3,3,3,3,3,1},
                    {1,1,1,3,3,3,3,3,2,2,2,2,2,2,2,3,3,3,3,3,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            };
            posicaoJogadorX=POSICAOXL, posicaoJogadorY=POSICAOYL, posicaoJogadorZ=POSICAOZL, vida=VIDA_PLAYER, auxMsg=TIMER_MSG;
            limpaDisplay(msgA, msgB, msgC, auxMsg);
            // mensagem da linha A
            int x;
            for(x=0; msg0L[x]!='\0'; x++) msgA[x]=msg0L[x]; 
            msgA[x] = '\0';
            auxMsg=1; //mensagens que devem durar

            //REGRAS DO JOGO - NIVEL LINUX
            limpaTela();
            nivelEscondidoIntro();
            // RECEBE O NOME DO USUÁRIO
            limpaTela();
            printf("\n\n\n\n\n\n\t\t\t\t ............................... \n");
            printf(            "\t\t\t\t|                               |\n");
            printf(            "\t\t\t\t|       Informe seu nome:       |\n");
            printf(            "\t\t\t\t|                               |\n");
            printf(            "\t\t\t\t ...............................\n\n");
            printf(            "\t\t\t\t       > ");
            scanf("%20[^\n]s", nome);
            limpaBufferEntrada();

            // INICIO DO JOGO - NIVEL LINUX
            do{
                limpaTela();
                // atributos do jogador
                printf("\n");
                printf("\t\t " FUNDO_VERMELHO "%d <3" RESET "\t\t\t\t\t\t\t\t" FUNDO_AZUL "%s" RESET "\t\t\n", vida, nome);
                printf("\n");
                //exibe o mapa
                mapa[posicaoJogadorX][posicaoJogadorY]=0; // coloca o personagem na posição adequada
                for(int x=0; x<ALTURAL; x++){
                    printf("\t\t\t    "); // Espaçamento lateral do labirinto
                    for(int y=0; y<LARGURAL; y++){
                        if (mapa[x][y]==1)
                            printf(FUNDO_BRANCO"  "RESET); //parede branca
                        else if(mapa[x][y]==2)
                            printf("  "); //espaço 
                            else if(mapa[x][y]==3)
                                printf(FUNDO_AMARELO"  "RESET); //parede amarela 
                                else if(mapa[x][y]==0){
                                    if (posicaoJogadorZ==0){
                                        printf(TEXTO_MAGENTA"0 "RESET);
                                    } else {
                                        printf(TEXTO_MAGENTA" 0"RESET);
                                    } 
                                } else {
                                        // limpa os rastros do personagem
                                        printf("  ");
                                }
                    }
                    printf("\n");
                }
                
                // display para exibir mensagens
                printf("\n");
                printf("\t       .......................................................................\n");
                printf("\t       | \n");
                printf("\t       | %s\n", msgA);
                printf("\t       | %s\n", msgB);
                printf("\t       | %s\n", msgC);
                printf("\t       | \n");
                printf("\t       .......................................................................\n");
                
                printf("\n\t    \x1b[4mDIGITE 0 PARA VOLTAR AO MENU PRINCIPAL\x1b[0m \t\t \x1b[4mDIGITE F PARA FECHAR O JOGO\x1b[0m\n");
                printf("\n");
                // recebe a opção do jogador
                printf("\t\t> ");
                scanf("%c", &opc);
                limpaBufferEntrada();

                // TESTA A OPÇÃO DO JOGADOR - NIVEL LINUX
                if (opc=='F'){
                    desistencia();
                    return 0;
                } else if(opc=='0'){
                    // RECONFIGURAÇÕES                    
                    // tira o jogador do mapa
                    mapa[posicaoJogadorX][posicaoJogadorY]=2;
                    //limpa a caixa de mensagem
                    limpaDisplay(msgA, msgB, msgC, auxMsg);

                // MOVIMENTAÇÃO DO JOGADOR
                } else if (opc=='d' || opc=='D'){
                    aux=mapa[posicaoJogadorX][posicaoJogadorY+1];
                    // testa no mapa
                    if((aux==1 || aux==3) && posicaoJogadorZ==1){
                        //não anda
                        int x;
                        for(x=0; msgErro1[x]!='\0'; x++){
                            msgA[x]=msgErro1[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else {
                        //anda
                        mapa[posicaoJogadorX][posicaoJogadorY]=2; //limpa a posição atual
                        if(posicaoJogadorZ==1){
                            posicaoJogadorY++;
                            posicaoJogadorZ=0;
                        } else {
                            posicaoJogadorZ++;
                        }
                        limpaDisplay(msgA, msgB, msgC, auxMsg);
                    }
                } else if (opc=='a' || opc=='A'){
                    aux=mapa[posicaoJogadorX][posicaoJogadorY-1];
                    // testa o mapa
                    if((aux==1 || aux==3) && posicaoJogadorZ==0){
                        //não anda
                        int x;
                        for(x=0; msgErro2[x]!='\0'; x++){
                            msgA[x]=msgErro2[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else {
                        //anda
                        mapa[posicaoJogadorX][posicaoJogadorY]=2; //limpa a posição atual
                        if(posicaoJogadorZ==0){
                            posicaoJogadorY--;
                            posicaoJogadorZ=1;
                        } else {
                            posicaoJogadorZ--;
                        }
                        //limpa a caixa de mensagem
                        limpaDisplay(msgA, msgB, msgC, auxMsg);
                    }
                } else if (opc=='w' || opc=='W'){
                    aux=mapa[posicaoJogadorX-1][posicaoJogadorY];
                    // testa o mapa
                    if((aux==1 || aux==3)){
                        //não anda
                        int x;
                        for(x=0; msgErro3[x]!='\0'; x++){
                            msgA[x]=msgErro3[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else {
                        //anda
                        mapa[posicaoJogadorX][posicaoJogadorY]=2; //limpa a posição atual 
                        posicaoJogadorX--;
                        //limpa a caixa de mensagem
                        limpaDisplay(msgA, msgB, msgC, auxMsg);
                    }
                } else if (opc=='s' || opc=='S'){
                    aux=mapa[posicaoJogadorX+1][posicaoJogadorY];
                    // testa o mapa
                    if((aux==1 || aux==3)){
                        //não anda
                        int x;
                        for(x=0; msgErro4[x]!='\0'; x++){
                            msgA[x]=msgErro4[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else {
                        //anda
                        mapa[posicaoJogadorX][posicaoJogadorY]=2; //limpa a posição atual 
                        posicaoJogadorX++;
                        //limpa a caixa de mensagem
                        limpaDisplay(msgA, msgB, msgC, auxMsg);
                    }
                } 
                
                // FIM DE JOGO
                aux=mapa[posicaoJogadorX][posicaoJogadorY];
                if (aux==22){
                    limpaTela();
                    printf("\n\n\n\n\n\n\t\t\t\t ........................................................................ \n");
                    printf(            "\t\t\t\t|                                                                        |\n");
                    printf(            "\t\t\t\t|                    Parabens! Nivel TUX finalizado!                     |\n");
                    printf(            "\t\t\t\t|           Ta vendo como usar sistema linux nao e tão difícil!          |\n");
                    printf(            "\t\t\t\t|              \x1b[4mAPERTE [ENTER] PARA VOLTAR AO MENU PRINCIPAL\x1b[0m              |\n");
                    printf(            "\t\t\t\t|                  \x1b[4mDIGITE Eu amo o Tux PARA FECHAR O JOGO\x1b[0m                |\n");
                    printf(            "\t\t\t\t|                                                                        |\n");
                    printf(            "\t\t\t\t ........................................................................\n\n");
                    printf(            "\t\t\t\t       > ");
                    char opcFinal[13], final[]="Eu amo o Tux";
                    scanf("%12[^\n]s", opcFinal);
                    limpaBufferEntrada();
                    for(int x=0; final[x]!='\0'; x++){
                        if(final[x]!=opcFinal[x]){
                            opc='0';
                            break;
                        }
                    }
                    if (opc!='0') return 0;
                }
                auxMsg++;
                limpaTela();
            }while(opc!='0');
            opc=' '; //para o segundo laço não parar
        } else if(opc=='w'){
              /*
                0 - jogador
                1 - parede
                2 - espaço em branco
                3 - parede azul
                esse mapa não tem saída de propósito
                10x - alguma frase
                11X - algum fatality (morte instantanea)
                obs.: cada caracter tem 1 de altura e 1 de largura 
            */
            int mapa[ALTURAW][LARGURAW]={
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,3,3,3,1},
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,3,3,2,2,2,3,2,3,2,3,2,2,3,3,1},
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,2,2,2,3,3,3,1,1,1,3,3,3,3,3,3,2,2,2,2,3,2,3,3,3,2,2,3,2,2,2,1},
                {1,1,1,1,3,3,3,3,2,2,2,3,3,3,3,3,2,3,2,2,2,3,1,1,1,3,3,3,3,3,3,2,3,3,2,3,2,2,2,3,3,2,3,3,3,2,1},
                {1,2,3,3,2,3,2,2,2,3,2,2,2,2,2,3,3,3,3,3,2,3,1,1,1,3,3,2,2,2,2,2,3,3,2,3,3,3,2,3,2,2,2,2,3,2,1},
                {1,2,2,2,2,2,2,3,2,3,3,3,2,3,2,3,2,2,2,3,2,3,1,1,1,3,3,2,3,3,3,3,3,3,2,2,2,3,2,3,2,3,3,2,2,2,1},
                {1,3,2,3,2,3,2,3,3,3,3,3,3,3,2,2,2,3,2,3,2,3,1,1,1,3,3,2,3,2,3,3,2,3,2,3,2,2,3,3,2,3,2,3,2,3,1},
                {1,3,3,3,3,3,2,3,2,2,2,2,2,3,2,3,2,3,2,3,2,3,1,1,1,3,3,2,3,2,2,2,3,3,2,3,3,3,2,2,2,3,2,3,2,3,1},
                {1,2,2,2,2,2,2,3,2,3,3,3,3,2,2,3,2,2,2,3,2,3,1,1,1,3,3,2,3,3,3,2,3,2,2,3,3,3,2,3,3,3,3,3,2,3,1},
                {1,2,3,3,3,2,3,3,2,3,2,3,3,2,3,3,3,3,3,3,2,3,1,1,1,3,3,2,2,2,3,2,2,3,2,2,2,2,2,3,3,2,2,2,2,3,1},
                {1,2,2,114,3,2,2,2,2,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,2,3,2,3,3,3,2,3,3,3,2,2,2,3,3,2,3,1},
                {1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1},
                {1,2,3,2,3,2,2,113,2,3,3,3,3,3,2,2,2,2,2,2,3,2,1,1,1,3,2,2,2,2,2,2,3,2,3,3,3,3,3,3,2,2,2,3,2,3,1},
                {1,2,3,104,2,2,3,3,2,2,2,2,2,3,3,2,3,3,2,2,2,3,1,1,1,3,2,3,3,3,2,2,2,2,2,2,2,3,2,3,2,3,2,2,2,3,1},
                {1,2,3,2,3,3,3,3,2,3,3,3,103,2,2,2,2,3,2,3,111,3,1,1,1,3,2,3,2,2,2,3,3,3,2,3,3,3,2,3,2,3,3,2,3,3,1},
                {1,2,3,2,3,2,2,2,2,3,3,3,2,3,2,3,2,3,2,3,2,3,1,1,1,3,2,3,2,3,2,3,2,3,2,3,2,2,2,3,2,3,2,2,3,3,1},
                {1,2,3,2,3,2,3,2,3,2,2,2,2,3,2,3,112,3,3,3,2,3,1,1,1,3,2,3,3,3,2,2,2,3,2,3,3,3,2,3,2,3,2,3,3,2,1},
                {1,2,2,2,3,2,3,2,3,2,3,3,3,3,3,3,2,2,2,102,2,3,1,1,1,3,2,3,2,2,2,3,3,2,2,2,2,3,2,3,2,3,2,3,3,2,1},
                {1,3,3,2,2,2,3,2,3,2,2,2,2,2,2,2,3,3,3,3,101,3,1,1,1,3,2,3,2,3,2,3,3,2,3,3,2,3,2,3,2,3,2,2,2,2,1},
                {1,1,1,1,3,3,3,2,3,3,3,3,2,3,3,2,2,2,2,2,2,2,1,1,1,3,2,3,2,3,2,2,2,2,3,3,2,3,3,3,2,3,3,3,2,3,1},
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,2,1,1,1,2,2,3,2,2,3,3,3,3,3,3,2,2,2,2,2,3,2,2,2,3,1},
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,1},
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,3,3,1},
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},

            };
            posicaoJogadorX=POSICAOXW, posicaoJogadorY=POSICAOYW, vida=VIDA_PLAYER*0.5, auxMsg=TIMER_MSG;
            // jogador com metade da vida padrão
            limpaDisplay(msgA, msgB, msgC, auxMsg);
            // mensagem da linha A
            int x;
            for(x=0; msg0W[x]!='\0'; x++) msgA[x]=msg0W[x]; 
            msgA[x] = '\0';
            auxMsg=1; //mensagens que devem durar

            //REGRAS DO JOGO - NIVEL WINDOWS
            limpaTela();
            // nivelEscondidoIntro();
            // RECEBE O NOME DO USUÁRIO
            limpaTela();
            printf("\n\n\n\n\n\n\t\t\t\t ........................................ \n");
            printf(            "\t\t\t\t|                                        |\n");
            printf(            "\t\t\t\t|       Informe o nome do jogador:       |\n");
            printf(            "\t\t\t\t|                                        |\n");
            printf(            "\t\t\t\t ........................................\n\n");
            printf(            "\t\t\t\t       > ");
            scanf("%20[^\n]s", nome);
            limpaBufferEntrada();

            // INICIO DO JOGO - NIVEL WINDOWS
            do{
                limpaTela();
                // atributos do jogador
                printf("\n");
                printf("\t\t " FUNDO_VERMELHO "%d <3" RESET "\t\t\t\t\t\t\t\t" FUNDO_AZUL "%s" RESET "\t\t\n", vida, nome);
                printf("\n");
                //exibe o mapa
                mapa[posicaoJogadorX][posicaoJogadorY]=0; // coloca o personagem na posição adequada
                for(int x=0; x<ALTURAW; x++){
                    printf("\t\t\t"); // Espaçamento lateral do labirinto
                    for(int y=0; y<LARGURAW; y++){
                        if (mapa[x][y]==1){
                            printf(FUNDO_BRANCO" "RESET); //parede
                        } else if(mapa[x][y]==3){
                            printf(FUNDO_WINDOWS" "RESET); // parede azul
                            } else if(mapa[x][y]==2)
                                printf(" "); // espaço em branco
                                else if(mapa[x][y]==0){
                                    printf(TEXTO_MAGENTA"0"RESET);
                                } else {
                                        // limpa os rastros do personagem
                                        printf(" ");
                                }
                    }
                    printf("\n");
                }
                
                // display para exibir mensagens
                printf("\t       .......................................................................\n");
                printf("\t       | %s\n", msgA);
                printf("\t       | %s\n", msgB);
                printf("\t       | %s\n", msgC);
                printf("\t       .......................................................................\n");

                // TESTA A VIDA DO JOGADOR - NÍVEL WINDOWS
                if (vida>0){
                    printf("\n\t    \x1b[4mDIGITE 0 PARA VOLTAR AO MENU PRINCIPAL\x1b[0m \t\t \x1b[4mDIGITE F PARA FECHAR O JOGO\x1b[0m\n");
                    printf("\n");
                    // recebe a opção do jogador
                    printf("\t\t> ");
                    scanf("%c", &opc);
                    limpaBufferEntrada();
                } else {
                    printf("\n\t\t%sAcho que a sorte nao esta a seu favor...%s\n\n", FUNDO_VERMELHO, RESET);
                    limpaBufferEntrada();
                    gameOver();
                    opc='0';
                }

                // TESTA A OPÇÃO DO JOGADOR - NIVEL WINDOWS
                if (opc=='F'){
                    desistencia();
                    return 0;
                } else if(opc=='0'){
                    // RECONFIGURAÇÕES                    
                    // tira o jogador do mapa
                    mapa[posicaoJogadorX][posicaoJogadorY]=2;
                    //limpa a caixa de mensagem
                    limpaDisplay(msgA, msgB, msgC, auxMsg);

                // MOVIMENTAÇÃO DO JOGADOR 
                } else if (opc=='d' || opc=='D'){
                    aux=mapa[posicaoJogadorX][posicaoJogadorY+1];
                    // testa no mapa
                    if(aux==1 || aux==3){
                        //não anda
                        int x;
                        for(x=0; msgErro1[x]!='\0'; x++){
                            msgA[x]=msgErro1[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else {
                        //anda
                        mapa[posicaoJogadorX][posicaoJogadorY]=2; //limpa a posição atual
                        posicaoJogadorY++;
                        limpaDisplay(msgA, msgB, msgC, auxMsg);
                    }
                } else if (opc=='a' || opc=='A'){
                    aux=mapa[posicaoJogadorX][posicaoJogadorY-1];
                    // testa o mapa
                    if(aux==1||aux==3){
                        //não anda
                        int x;
                        for(x=0; msgErro2[x]!='\0'; x++){
                            msgA[x]=msgErro2[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else {
                        //anda
                        mapa[posicaoJogadorX][posicaoJogadorY]=2; //limpa a posição atual
                        posicaoJogadorY--;
                        //limpa a caixa de mensagem
                        limpaDisplay(msgA, msgB, msgC, auxMsg);
                    }
                } else if (opc=='w' || opc=='W'){
                    aux=mapa[posicaoJogadorX-1][posicaoJogadorY];
                    // testa o mapa
                    if(aux==1||aux==3){
                        //não anda
                        int x;
                        for(x=0; msgErro3[x]!='\0'; x++){
                            msgA[x]=msgErro3[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else {
                        //anda
                        mapa[posicaoJogadorX][posicaoJogadorY]=2; //limpa a posição atual 
                        posicaoJogadorX--;
                        //limpa a caixa de mensagem
                        limpaDisplay(msgA, msgB, msgC, auxMsg);
                    }
                } else if (opc=='s' || opc=='S'){
                    aux=mapa[posicaoJogadorX+1][posicaoJogadorY];
                    // testa o mapa
                    if(aux==1||aux==3){
                        //não anda
                        int x;
                        for(x=0; msgErro4[x]!='\0'; x++){
                            msgA[x]=msgErro4[x];
                        }
                        for(int y=x; y<TAMANHO_MSG; y++)
                            msgA[y]=' ';
                        auxMsg=TIMER_MSG; //para não deixar a mensagem de erro no display
                    } else {
                        //anda
                        mapa[posicaoJogadorX][posicaoJogadorY]=2; //limpa a posição atual 
                        posicaoJogadorX++;
                        //limpa a caixa de mensagem
                        limpaDisplay(msgA, msgB, msgC, auxMsg);
                    }
                } 
                
                // MENSAGENS DO JOGO - NÍVEL WINDOWS
                aux=mapa[posicaoJogadorX][posicaoJogadorY];
                if (aux==101){
                    int x;
                    for(x=0; msg1W[x]!='\0'; x++){
                            msgA[x]=msg1W[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                } else if (aux==102){
                    int x;
                    for(x=0; msg2W[x]!='\0'; x++){
                            msgA[x]=msg2W[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                } else if (aux==103){
                    int x;
                    for(x=0; msg3W[x]!='\0'; x++){
                            msgA[x]=msg3W[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                } else if (aux==104){
                    int x;
                    for(x=0; msg4W[x]!='\0'; x++){
                            msgA[x]=msg4W[x];
                    }
                    msgA[x]='\0';
                    auxMsg=0;
                // OBSTÁCULOS
                } else if(aux==111){
                    int x;
                    for(x=0; msgDano1AW[x]!='\0'; x++){
                            msgA[x]=msgDano1AW[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDanoIB[x]!='\0'; x++){
                            msgB[x]=msgDanoIB[x];
                    }
                    msgB[x]='\0';

                    for(x=0; msgDanoC[x]!='\0'; x++){
                            msgC[x]=msgDanoC[x];
                    }
                    msgC[x]='\0';
                    vida=0;
                } else if(aux==112){
                    limpaDisplay(msgA, msgB, msgC, TIMER_MSG);
                    int x;
                    for(x=0; msgDano2AW[x]!='\0'; x++){
                            msgA[x]=msgDano2AW[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDanoIB[x]!='\0'; x++){
                            msgB[x]=msgDanoIB[x];
                    }
                    msgB[x]='\0';
                    for(x=0; msgDanoC[x]!='\0'; x++){
                            msgC[x]=msgDanoC[x];
                    }
                    msgC[x]='\0';
                    vida=0;
                } else if(aux==113){
                    limpaDisplay(msgA, msgB, msgC, TIMER_MSG);
                    int x;
                    for(x=0; msgDano3AW[x]!='\0'; x++){
                            msgA[x]=msgDano3AW[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDanoIB[x]!='\0'; x++){
                            msgB[x]=msgDanoIB[x];
                    }
                    msgB[x]='\0';
                    for(x=0; msgDanoC[x]!='\0'; x++){
                            msgC[x]=msgDanoC[x];
                    }
                    msgC[x]='\0';
                    vida=0;
                } else if(aux==114){
                    limpaDisplay(msgA, msgB, msgC, TIMER_MSG);
                    int x;
                    for(x=0; msgDano4AW[x]!='\0'; x++){
                            msgA[x]=msgDano4AW[x];
                    }
                    msgA[x]='\0';

                    for(x=0; msgDanoIB[x]!='\0'; x++){
                            msgB[x]=msgDanoIB[x];
                    }
                    msgB[x]='\0';
                    for(x=0; msgDanoC[x]!='\0'; x++){
                            msgC[x]=msgDanoC[x];
                    }
                    msgC[x]='\0';
                    vida=0;
                } 
                auxMsg++;
                limpaTela();
            }while(opc!='0');
            opc=' '; //para o segundo laço não parar

        }
    }while(opc!='0');
    limpaTela();
    printf(       "\n\n\n\n\t\t\t\t ................................. \n");
    printf(            "\t\t\t\t|                                 |\n");
    printf(            "\t\t\t\t|           FIM DO JOGO           |\n");
    printf(            "\t\t\t\t|          ATÉ A PRÓXIMA          |\n");
    printf(            "\t\t\t\t|                                 |\n");
    printf(            "\t\t\t\t ................................. \n\n");
    return 0;
}