#include <stdio.h>

int main(void) {

printf("Selescione uma opção:\n(1)Calcular minha média final;\n(2)Calcular quanto preciso tirar na A2;\n");
  int op;
  scanf("%d" , &op);
  getchar();

  if(op == 1){
    printf("Nota na A1:\n");
    float A1;
    scanf("%f" , &A1);
    getchar();
    printf("Nota na A2:\n");
    float A2;
    scanf("%f" , &A2);
    getchar();

    float media= (A1 * 0.4) + (A2 * 0.6);
    printf("Média final: %0.2f\n" , media);

    if(media==0) 
      printf("Menção: SR\n");

    else if(media>0 && media<3)
      printf("Menção: II\n");

    else if(media>=3 && media<5)
      printf("Mesção: MI\n");

    else if(media>=5 && media<7)
      printf("Menção: MM\n");

    else if(media>=7 && media<9)
      printf("Menção: MS\n");

    else if(media>=9)
      printf("Menção SS\n");
        
    media >= 5? printf("APROVADO!\n") : printf("Você ficou de P3!\n");
  }

  else if(op == 2){
    printf("Nota A1:\n");
    float A1;
    scanf("%f" , &A1);

    float A2= (5 - (A1 * 0.4))/ 0.6;

    printf("Você precisa tirar %0.2f na A2!\n" , A2);
  }

 
  return 0;
}