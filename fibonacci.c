#include <stdio.h>
int main() {
  unsigned vet[4];
  unsigned int i;
  vet[0] = 0, vet[1] = 1, vet[2] = 0, vet[3] = 0;

  printf("Digite o número que deseja verificar: \n");
  scanf("%u", &vet[3]);
  for (i = 0; i < vet[3]; i++) {
    vet[2] = vet[0] + vet[1];
    if (vet[2] == vet[3]) {
      printf("\nO número pertence a sequência de Fibonacci , e é composto pela "
             "soma dos números: %u + %u\n",
             vet[0], vet[1]);
      return 0;
    }
    vet[0] = vet[1];
    vet[1] = vet[2];
  }
  printf("O numero não pertence a sequência de Fibonacci.\n");
  return 0;
}