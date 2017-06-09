#include <stdio.h>
#include <stdlib.h>
#define MAX 10

/* ROTACIONA UMA PLACA NO SENTIDO HORARIO */
void rotate_board_CW(char* board){

    int i=0,j=0,contadorAux=0,linha=0,coluna=0;
    char matrizAux[MAX][MAX], matrizReal[MAX][MAX];

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            matrizReal[i][j] = *(board+contadorAux);
            ++contadorAux;
        }
    }

    contadorAux=0;

    for(j = 0; j < MAX; j++){
        for(i = MAX - 1; i >= 0; i--){
            matrizAux[linha][coluna] = matrizReal[i][j];
            ++coluna;++contadorAux;
        }
        coluna=0;++linha;
    }

    linha=0;coluna=0;contadorAux=0;

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            *(board+contadorAux) = matrizAux[i][j];
            ++contadorAux;
        }
    }

}

/* ROTACIONA UMA PLACA NO SENTIDO ANTI HORARIO */
void rotate_board_CCW(char* board){

    int i=0,j=0,contadorAux=0,linha=0,coluna=0;
    char matrizAux[MAX][MAX], matrizReal[MAX][MAX];

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            matrizReal[i][j] = *(board+contadorAux);
            ++contadorAux;
        }
    }

    contadorAux=0;

    for(j = MAX - 1; j >= 0; j--){
        for(i = 0; i < MAX; i++){
            matrizAux[linha][coluna] = matrizReal[i][j];
            ++coluna;++contadorAux;
        }
        coluna=0;++linha;
    }

    linha=0;coluna=0;contadorAux=0;

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            *(board+contadorAux) = matrizAux[i][j];
            ++contadorAux;
        }
    }

}

/* ROTACIONA TODAS AS PLACAS NO SENTIDO HOR�RIO */
void rotate_board_all_CW(char* board){

    int i=0,j=0,contadorAux=0,linha=0,coluna=0;
    char matrizAux[MAX][MAX], matrizReal[MAX][MAX];

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            matrizReal[i][j] = *(board+contadorAux);
            ++contadorAux;
        }
    }

    contadorAux=0;

    for(j = 0; j < MAX; j++){
        for(i = MAX - 1; i >= 0; i--){
            matrizAux[linha][coluna] = matrizReal[i][j];
            ++coluna;++contadorAux;
        }
        coluna=0;++linha;
    }

    linha=0;coluna=0;contadorAux=0;

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            *(board+contadorAux) = matrizAux[i][j];
            ++contadorAux;
        }
    }

}

/* ROTACIONA TODAS AS PLACAS NO SENTIDO ANTI HO�RIO */
void rotate_board_all_CCW(char* board){

    int i=0,j=0,contadorAux=0,linha=0,coluna=0;
    char matrizAux[MAX][MAX], matrizReal[MAX][MAX];

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            matrizReal[i][j] = *(board+contadorAux);
            ++contadorAux;
        }
    }

    contadorAux=0;

    for(j = MAX - 1; j >= 0; j--){
        for(i = 0; i < MAX; i++){
            matrizAux[linha][coluna] = matrizReal[i][j];
            ++coluna;++contadorAux;
        }
        coluna=0;++linha;
    }

    linha=0;coluna=0;contadorAux=0;

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            *(board+contadorAux) = matrizAux[i][j];
            ++contadorAux;
        }
    }

}

/* RETORNA O INDEX DA CAMANDA QUE SER� MOVIMENTADA */
//int getIndexCamada(char camada){}

/* REALIZA A DISTRIBUI��O DOS MOVIMENTOS SEGUNDO SEUS RESPECTIVOS PARAMETROS DE ENTRADA
   P - �NICA PLACA, A - TODAS AS PLACAS, CW - SENTIDO HOR�RIO, CCW - SENTIDO ANTI-HOR�RIO */
//void executaMovimentacoes(char acaoAux, int camada){}

/* RECEBE A PALAVRA CHAVE E DISPARA A REQUISI��O DE BUSCA NO CUBO */
//void getPalavraChave(){}

/* MENU DE ENTRADA DE DADOS E AUXILIARES PARA A TRANSI��O DE MOVIMENTOS E BUSCA */
void getMenuParametros(){

    char matriz[MAX][MAX][MAX]={{{'G','P','Q','O','D','I','U','S','O','C'},{'X','A','K','L','M','H','C','I','Q','X'},{'F','P','J','E','G','I','A','B','T','G'},{'H','Z','C','D','E','C','K','V','N','C'},{'X','Q','Z','P','X','M','K','D','H','R'},{'F','G','M','J','R','R','Q','S','C','I'},{'C','O','L','Y','O','J','F','N','G','X'},{'X','C','H','V','J','Y','W','A','X','J'},{'U','X','J','T','W','F','N','N','W','O'},{'H','U','G','C','R','W','P','F','Y','B'}},
                                {{'O','R','E','N','T','F','D','I','J','O'},{'G','P','M','U','W','I','A','O','Q','R'},{'Z','N','N','L','R','N','G','E','V','N'},{'R','V','S','R','I','F','R','G','J','V'},{'F','I','E','M','R','N','M','S','Z','V'},{'F','D','M','D','Q','J','M','D','X','Q'},{'L','Z','D','F','O','B','U','R','O','G'},{'P','C','B','W','D','B','C','C','J','C'},{'P','B','S','W','U','R','R','T','H','H'},{'Q','Y','R','E','E','F','K','O','X','T'}},
                                {{'O','H','G','L','O','Q','G','I','X','L'},{'F','W','E','B','Q','P','F','H','Z','D'},{'P','Z','B','I','G','X','I','T','Y','U'},{'A','S','A','I','D','J','Q','B','D','I'},{'C','R','U','Q','I','L','Q','W','K','H'},{'Y','R','Q','L','Q','I','X','R','P','S'},{'Q','T','M','R','P','N','B','I','H','Z'},{'C','J','B','I','L','X','C','O','W','K'},{'T','F','Q','R','Y','C','X','N','M','B'},{'P','F','J','V','H','B','D','A','S','U'}},
                                {{'G','L','E','O','X','B','W','P','W','U'},{'X','O','B','Q','P','E','J','Y','D','V'},{'G','A','X','X','T','D','A','D','U','Y'},{'Z','W','O','V','E','V','D','I','A','H'},{'N','H','Y','F','B','L','F','Z','S','N'},{'R','R','U','W','D','A','A','R','U','I'},{'O','A','Z','V','F','X','R','Z','N','F'},{'O','L','X','H','J','D','G','C','E','L'},{'W','Y','B','F','I','Q','F','Z','F','K'},{'J','G','P','P','D','E','R','F','L','D'}},
                                {{'L','T','O','H','Q','S','Q','U','R','Q'},{'I','T','A','U','L','Q','W','Z','D','B'},{'R','F','M','A','I','C','V','B','Z','V'},{'L','T','E','I','A','A','E','T','M','C'},{'T','U','Q','A','E','V','C','R','Y','M'},{'J','W','C','O','J','I','Y','V','Y','J'},{'X','S','Q','P','E','S','R','A','Z','Q'},{'V','G','V','Y','T','U','V','D','T','G'},{'T','R','L','C','M','X','J','Q','Y','N'},{'H','N','F','W','M','B','U','A','X','O'}},
                                {{'E','N','Q','X','K','P','B','C','K','B'},{'Y','Y','L','H','Z','U','S','F','W','Y'},{'U','T','H','I','M','B','G','E','K','R'},{'B','W','V','X','Z','P','A','T','F','O'},{'Z','P','Y','P','L','K','F','C','M','G'},{'K','Z','E','L','Q','V','U','I','T','N'},{'M','S','U','O','I','C','E','R','P','N'},{'X','E','E','C','J','Y','U','H','Y','H'},{'V','W','T','A','E','Z','I','K','L','Z'},{'T','T','P','L','E','U','Z','U','J','J'}},
                                {{'P','S','T','A','V','L','F','W','B','J'},{'A','K','I','P','R','H','Y','S','W','E'},{'D','W','I','U','E','U','Y','C','H','Z'},{'J','Q','V','N','F','U','M','K','L','D'},{'T','R','J','R','Q','U','D','E','I','Z'},{'B','P','U','A','M','U','R','Y','B','I'},{'Q','H','V','M','K','J','I','S','W','A'},{'Q','J','P','P','A','Q','O','E','K','Q'},{'Q','B','Q','E','O','J','V','X','H','H'},{'D','O','Y','H','J','R','K','H','X','U'}},
                                {{'L','K','V','Y','D','C','V','E','M','Z'},{'A','S','Y','O','N','R','Y','Q','M','Q'},{'M','Q','T','T','C','E','F','H','V','H'},{'M','S','Q','L','Z','W','G','D','X','W'},{'X','T','K','R','M','F','I','G','O','Z'},{'V','M','F','Z','D','M','B','S','C','K'},{'J','N','W','T','X','P','K','S','M','H'},{'C','Z','H','F','N','I','W','O','M','H'},{'A','M','F','Z','Y','N','H','D','P','N'},{'B','E','O','U','S','D','R','X','P','I'}},
                                {{'E','O','E','J','K','X','I','C','T','X'},{'N','M','A','B','M','B','M','C','J','S'},{'T','I','C','B','T','Y','P','R','O','E'},{'L','Y','M','A','O','E','Q','B','U','G'},{'U','M','A','E','A','A','Q','W','E','L'},{'B','L','U','U','A','L','V','W','F','C'},{'E','W','A','E','P','Y','N','E','G','T'},{'R','Y','U','N','Z','H','F','J','R','U'},{'F','V','X','G','K','S','Y','P','W','L'},{'W','W','W','Y','S','L','P','S','J','E'}},
                                {{'X','Y','K','S','W','S','D','W','T','E'},{'I','T','G','I','W','U','Y','U','T','C'},{'H','R','C','N','G','A','P','V','Z','N'},{'T','L','Y','Q','U','I','K','H','T','V'},{'Q','X','I','S','W','N','I','V','H','P'},{'Y','N','N','F','T','Y','X','H','Z','E'},{'V','S','L','H','N','S','G','B','E','E'},{'H','B','O','W','E','L','D','K','B','M'},{'S','M','P','Q','Y','F','I','C','F','E'},{'N','L','N','Y','G','Q','C','L','I','I'}}};

    char matrizAux[MAX][MAX];
    char matrizIndex[MAX][MAX];

    int i=0,j=0,k=0,l=0,m=0,n=0,tamanhoPalavra=0,num=0,camada=0,numeroLoops=0,contadorCaracter=0;
    char acao[100],acaoAux[100],palavraChave[100],palavraAux[100];

    int linha=0,coluna=0,param=2;

    scanf("%d",&numeroLoops);

    for(i=0;i<numeroLoops;i++){

        fflush(stdin);
        gets(acao);

        // QUANTIDADE DE CARACTERES DA STRING DE AÇÃO E SEU INDEX, CASO O TENHA
        for(j=0;acao[j] != '\0';j++){

            if(acao[j] == 32){

                switch(acao[j+1]){

                    case '0':{
                        camada = 0;
                        break;
                    }

                    case '1':{
                        camada = 1;
                        break;
                    }

                    case '2':{
                        camada = 2;
                        break;
                    }

                    case '3':{
                        camada = 3;
                        break;
                    }

                    case '4':{
                        camada = 4;
                        break;
                    }

                    case '5':{
                        camada = 5;
                        break;
                    }

                    case '6':{
                        camada = 6;
                        break;
                    }

                    case '7':{
                        camada = 7;
                        break;
                    }

                    case '8':{
                        camada = 8;
                        break;
                    }

                    default:{
                        camada = 9;
                        break;
                    }

                }

                num = 1;

            }

            if(num==0) contadorCaracter++;

        }

        // INICIA UMA VARIÁVEL COM OS VALORES DA AÇÃO SOLICITADA
        for(k=0;k<contadorCaracter;k++) acaoAux[k] = acao[k];
        acaoAux[contadorCaracter] = '\0';

        // DISPARA AS REQUISIÇÕES CONFORME AS AÇÕES DO USUÁRIO
        if( strcmp(acaoAux,"ACCW") == 0){

            for(n=0;n<MAX;n++){
                for(l=0;l<MAX;l++){
                    for(m=0;m<MAX;m++){
                        matrizIndex[l][m] = matriz[l][m][n];
                    }
                }

                rotate_board_all_CCW(matrizIndex);

                for(l=0;l<MAX;l++){
                    for(m=0;m<MAX;m++){
                        matriz[l][m][n] = matrizIndex[l][m];
                    }
                }
            }

        }else if( strcmp(acaoAux,"ACW") == 0){

            for(n=0;n<MAX;n++){
                for(l=0;l<MAX;l++){
                    for(m=0;m<MAX;m++){
                        matrizIndex[l][m] = matriz[l][m][n];
                    }
                }

                rotate_board_all_CW(matrizIndex);

                for(l=0;l<MAX;l++){
                    for(m=0;m<MAX;m++){
                        matriz[l][m][n] = matrizIndex[l][m];
                    }
                }
            }

        } else if( strcmp(acaoAux,"PCCW") == 0){

            for(l=0;l<MAX;l++){
                for(m=0;m<MAX;m++){
                    matrizIndex[l][m] = matriz[l][m][camada-1];
                }
            }

            rotate_board_CCW(matrizIndex);

            for(l=0;l<MAX;l++){
                for(m=0;m<MAX;m++){
                    matriz[l][m][camada-1] = matrizIndex[l][m];
                }
            }

        } else if( strcmp(acaoAux,"PCW") == 0){

            for(l=0;l<MAX;l++){
                for(m=0;m<MAX;m++){
                    matrizIndex[l][m] = matriz[l][m][camada-1];
                }
            }

            rotate_board_CW(matrizIndex);

            for(l=0;l<MAX;l++){
                for(m=0;m<MAX;m++){
                    matriz[l][m][camada-1] = matrizIndex[l][m];
                }
            }
        }

        // ZERA OS VALORES DAS VARIÁVEIS
        contadorCaracter=0;
        camada=0;
        num=0;

    }

    scanf("%s",&palavraChave);

    for(i=0;palavraChave[i] != '\0';i++){
        tamanhoPalavra++;
    }

    int vet=0;

    for(n=0;n<MAX;n++){
        for(l=0;l<MAX;l++){
            for(m=0;m<MAX;m++){
                if(matriz[n][l][m] == palavraChave[0]){
                    if(m+tamanhoPalavra <= MAX){
                        for(i=m;i<tamanhoPalavra;i++){
                            palavraAux[vet] = matriz[n][l][i];
                            ++vet;
                        }
                        palavraAux[tamanhoPalavra] = '\0';
                        if( strcmp(palavraChave,palavraAux) == 0 ){
                            printf("\n%s (%d.%d.%d)(%d.%d.%d)\n",palavraAux,n,l,m,n,l,i);
                        }
                    }
                    vet=0;
                    if(l+tamanhoPalavra <= MAX){
                        for(i=l;i<tamanhoPalavra;i++){
                            palavraAux[vet] = matriz[n][i][m];
                            ++vet;
                        }
                        palavraAux[tamanhoPalavra] = '\0';
                        if( strcmp(palavraChave,palavraAux) == 0 ){
                            printf("\n%s (%d.%d.%d)(%d.%d.%d)\n",palavraAux,n,l,m,n,i,m);
                        }
                    }
                    vet=0;
                    if(n+tamanhoPalavra <= MAX){
                        for(i=n;i<tamanhoPalavra;i++){
                            palavraAux[vet] = matriz[i][l][m];
                            ++vet;
                        }
                        palavraAux[tamanhoPalavra] = '\0';
                        if( strcmp(palavraChave,palavraAux) == 0 ){
                            printf("\n%s (%d.%d.%d)(%d.%d.%d)\n",palavraAux,n,l,m,i,l,m);
                        }
                    }
                    vet=0;
                }
            }
        }
    }
}

/* METODO MAIN */
int main()
{

    getMenuParametros();
    return 0;

}


