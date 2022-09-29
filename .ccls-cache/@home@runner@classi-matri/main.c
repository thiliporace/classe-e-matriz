#include <stdio.h>

void imprimirMatriz(int matriz[3][2], int linhas, int colunas) {
  for (int i = 0; i < linhas; i++) {
    int j;
    for (j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int vetor[3][2] = {{1, 2}, {3, 4}, {5, 6}};
  int i;
  imprimirMatriz(vetor, 3, 2);
  return 0;
}