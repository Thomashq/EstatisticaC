//O objetivo deste código é me torturtar criando uma aplicação em C para fazer cálculos estatísticos, e se possível criar tabelas. 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int Media(int sizes);
void InsertionSort(int N, int *Vet);
void PrintVector(int N, int *Vet);
int *FillVector(int N, int *Vet);
int *NewVector(int *Vet, int *Aux, int N);
void ShowMenu();

int main (){
    
    int opt = 0;
    int tam = 1, numExe = 2;
    int sizes[] = {10};
    float result = 0;
    
    while(1){ 
        
        ShowMenu();
        scanf("%d", &opt);
        
        switch (opt)
        {
            case 1:
                for(int i = 0; i < tam; i++ ){
                    printf("Entrada %d: \n", sizes[i]);

                    for(int j = 0; j < numExe; j++){
                        result = Media(sizes[i]);
                        printf("\n A média do vetor é: %.2f\n", result);
                    }
                }
                break;
        
            case 2:
                break;

            case 3:
                break;

            case 4:
                break;
        
            case 5:
                return 1;
                break;       
        }
    }
    
    return 0;
}

//Funções de tortura matemática
int Media(int sizes){
    int *GenericVet = FillVector(sizes, GenericVet);
    PrintVector(sizes, GenericVet);

    int sum;
    for(int i = 0; i < sizes; i++){
        sum += GenericVet[i];
    }
    printf("\n\n\n%d", sum);
    return sum/sizes;
}

void InsertionSort(int N, int *Vet) {
  
  int i = 0;
  int key;
  for (int j = 1; j < N; j++) {
    key = Vet[j];
    i = j - 1;
    while ((Vet[i] > key) && (i >= 0)) {
      Vet[i + 1] = Vet[i];
      i = i - 1;
    }
    Vet[i + 1] = key;
  }
}

void PrintVector(int N, int *Vet) {
  for (int x = 0; x < N; x++) {
    printf("%d |", Vet[x]);
  }
}

int *FillVector(int N, int *Vet) {
  srand(time(NULL));
  for (int x = 0; x < N; x++) {
    Vet[x] = rand() % 10;
  }
  return Vet;
}

int *NewVector(int *Vet, int *Aux, int N) {
  for (int i = 0; i < N; i++) {
    Aux[i] = Vet[i];
  }
  return Aux;
}
//funções utilitárias
void ShowMenu(){
    puts("Escolha a opreção matemática");
    puts("1- Média");
    puts("2- Mediana");
    puts("3- Moda");
    puts("4- Tabelas(se possível)");
    puts("5- Sair");
}
