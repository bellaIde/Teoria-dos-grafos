#include <stdio.h>
#include <locale.h>

/* definindo a quantidade de vertices como 6*/
#define VERTICE 6

/* criando variavel para a matriz adjacente*/
int mAdj[VERTICE][VERTICE];

void popular();
void imprimir();
/*criando uma variavel para o vizinho no caso v*/
void vizinho(int v);
/*criando uma variavel de caminho sendo vizinho da origem e vizinho do destino*/
void caminho(int vOrigem,int vDestino);
void destino();



int main(void){
setlocale(LC_ALL, "Portuguese");

popular();
imprimir();

/*dando um numero para origem no caso 1 e 3 para onde queremos que seja o destino*/
caminho(1,3);

}

/*criando a matriz de acordo com os vertices desse grafo, onde 1 há vértice e 0 não há*/
void popular(){
//vertice 1
mAdj[0][1] = 1;
mAdj[0][3] = 1;

//vertice 2
mAdj[1][0] = 1;
mAdj[1][2] = 1;
mAdj[1][4] = 1;

//vertice 3
mAdj[2][1] = 1;
// mAdj[2][3] = 1;

//vertice 4
mAdj[3][0] = 1;
// mAdj[3][2] = 1;
mAdj[3][4] = 1;

//vertice 5
mAdj[4][3] = 1;
mAdj[4][5] = 1;
mAdj[4][1] = 1;

//vertice 6
mAdj[5][4] = 1;
}

void imprimir(){
printf("\n");
/*criando uma variavel de linha e coluna*/
int i,j;

for(i=0;i<VERTICE;i++){
for(j=0;j < VERTICE;j++){
printf("%d  ",mAdj[i][j]);
}
printf("\n");
}
}

void vizinho(int v){
printf("\nO(s) vizinho(s) do vértice %d é(são): ",v);
v = v - 1;
int j;
for(j = 0;j < VERTICE;j++){
if(mAdj[v][j] == 1){
printf("%d, ", j+1 );
}
}
}

void caminho(int vOrigem,int vDestino){
printf("\n\n-------------------------------\n");
printf("O caminho do vértice %d",vOrigem);
printf(" até o vértice %d é: ",vDestino);
printf("\n%d => ",vOrigem);

    vOrigem--;
    vDestino--;



    int i,j;
    for(j = 0 ; j < VERTICE; j++){
        if((mAdj[vOrigem][j] == 1)||(vDestino == j)){
            for(i=0;i<VERTICE; i++){
                mAdj[i][j] = 0;
           
            }else printf("%d", vOrigem,vDestino){
             ((mAdj[vOrigem][j] == 1)&&(vDestino == j)){
           
             printf("%d" , (j++));
            }
       
    }
   
    printf("\n");
}