#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 5

int main() {
  int loop, loop2, i, j, k, l, verificador = 0;
  int Q, L, U, count = 0, tamanho;
  char temp[7], null[2] = " ";

  while (true) {

    scanf("%d %d", &loop, &loop2);

    if (loop == 0 && loop2 == 0)
      return 0;

    char numero[loop2 * 6];
    int num[loop2][loop];

    l = 0;

    while ((l + 1) <= loop) {

      strcpy(numero, null);

      scanf(" %[^\n]", numero);
      getchar();

      i = k = verificador = 0;

      while (numero[i] != '\0') {

        j = 0;
        strcpy(temp, null);

        while (numero[i] != ' ') {

          if (numero[i] != '\0') {
            temp[j] = numero[i];
            i++;
            j++;
          }

          else {
            verificador = 1;
            break;
          }
        }

        temp[j] = '\0';
        num[k][l] = atoi(temp);

        i++;
        k++;

        if (verificador == 1) {
          break;
        }
      }
      l++;
    } /*while*/

    scanf("%d", &Q);
    count = 0;
    int maior[Q];
    int x = 0;
    while (count < Q) {

      k = l = tamanho = 0;

      scanf("%d %d", &L, &U);
      maior[x] = 0;

      while (l < loop) {
        verificador = 0;
        tamanho = 0;
        if (L <= num[k][l] && U >= num[k][l]) {
          i = l;
          j = k;

          while (verificador == 0) {

            i++;
            j++;
            tamanho++;
            if (i == loop || j == loop2)
              break;

            for (int contador = k; contador <= k + tamanho; contador++) {
              if (L <= num[contador][i] && U >= num[contador][i])
                continue;
              else {
                verificador = 1;
                break;
              }
            }
            if (verificador == 1)
              break;
            for (int contador = l; contador < l + tamanho; contador++) {
              if (L <= num[j][contador] && U >= num[j][contador])
                continue;
              else {
                verificador = 1;
                break;
              }
            }
            if (verificador == 1)
              break;
          } /*while*/
          if (tamanho > maior[x]) {
            maior[x] = tamanho;
          }
        }
        k++;
        if (k == loop2) {
          l++;
          k = 0;
        }
      }
      count++;
      x++;
    }
    for (int i = 0; i < Q; i++) {
      printf("%d\n", maior[i]);
    }
    printf("-\n");
  }
}
