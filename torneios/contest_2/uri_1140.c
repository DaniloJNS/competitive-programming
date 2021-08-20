#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (){
  float matriz[12][12], resultado=0;
  char opt;
  int count=11,div=0;
  scanf("%c", &opt);
  for (int i = 0; i <= count; i++)
  {
      for (int j = 0; j <= count; j++)
      {
          scanf("%f", &matriz[j][i]);
      }
  }
  if(opt=='S'){

      for (int i = 1; i <= count; i++)
      {
          for (int j = 0; j <=i-1; j++)
          {
              resultado=resultado + matriz[i][j];
            } 
      }
    }
    if(opt=='M'){
     for (int i = 1; i <= count; i++)
      {
          for (int j = 0; j <=i-1; j++)
          {
              resultado=resultado + matriz[i][j];
              div++;
            } 
      }
      resultado=resultado/div;
  }
  printf("%.1f\n", resultado);
}