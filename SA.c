#include <stdio.h>

float medicoes;
float medicoesIdeais [10];
float limiteInferior;
float limiteSuperior;
int quantidadeMedicoesIdeais = 0;

void solicitarLimites() {
  do {
    printf("Informe o limite inferior da faixa ideal de operação: ");
    scanf("%f", &limiteInferior);

    printf("Informe o limite superior da faixa ideal de operação: ");
    scanf("%f", &limiteSuperior);

    printf("\n");

    if (limiteInferior > limiteSuperior){
      printf("O limite inferior não deve ser maior que o limite superior!\n\n");
    }
   } while (limiteInferior > limiteSuperior);
}

void solicitarMedicoes(){
  for (int i = 0; i < 10; i++){
    printf("Informe a %d medição: ", i+1);
    scanf("%f", &medicoes);
    if(medicoes >= limiteInferior && medicoes <= limiteSuperior){
      medicoesIdeais[quantidadeMedicoesIdeais] = medicoes;
      quantidadeMedicoesIdeais++;
    }
  }
}

void exibirMedicoesIdeais(){
  printf("\nAs medições dentro da faixa ideal de operação foram:\n");
  for (int i = 0; i < quantidadeMedicoesIdeais; i++){
    printf("%.2f\n", medicoesIdeais[i]);
  }
  printf("\nA quantidade de medições dentro da faixa ideal foi: %d ", quantidadeMedicoesIdeais);
}

int main() {
  
  printf("==========Monitoramento de temperatura==========\n\n");

  solicitarLimites();
  solicitarMedicoes();
  exibirMedicoesIdeais();

  return 0;
}