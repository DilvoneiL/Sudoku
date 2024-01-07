#include<stdio.h>
#include<stdlib.h>

#define M 9
#define N 3  

int bem_vindo();
int menu();
int menu_de_jogadas(int matriz[M][M]);
int imprime_sudoku(int matriz[M][M]);
int adicionar_jogada(int matriz[M][M]);
int remover_jogada(int matriz[M][M]);
int salvar_progresso(int matriz [M][M]);
int carregar_jogo();
int novo_jogo();
int faz_0_quadradinho(int matriz [M][M]);
int verifica_quadrado(int matrizinha[N][N]);
int verifica_linha(int matriz[M][M]);
int verifica_coluna(int matriz[M][M]);
int verifica_resolucao(int matriz[M][M]);
int tempo(int matriz[M][M]);
