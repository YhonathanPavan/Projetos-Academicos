#include <stdio.h>
#include <stdlib.h>

int opcao;
void menu()
{
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Divisao\n");
    printf("4. Multiplicacao\n");
    printf("5. Sair\n");
    scanf("%d", &opcao);
}



int main()
{
int n1, n2, resultado, limpa, nSair;
float nD1, nD2, resultadoDivisao;

 menu();

 while (opcao != 5){
//************************************SOMA****************************************
if (opcao == 1){

    printf("*****SOMA***** \n");
    printf("Digite um numero: \n");
    scanf("%d", &n1);
    printf("Digite mais um numero: \n");
    scanf("%d", &n2);
    resultado =  n1 + n2;
    printf("%d + %d = %d \n", n1, n2, resultado);


    printf("Aperte 1 para limpar \n");
     scanf("%d", &limpa);
    if (limpa == 1){
        system("cls");
    }else{
        while(limpa != 1){
          printf("Digite 1 para prosseguir! \n");
          scanf("%d", &limpa);
            if (limpa == 1){
            system("cls");
            }
        }
    }
    menu();

}
//************************************SUBTRAÇÃO****************************************
if (opcao == 2){
    printf("*****SUBTRACAO***** \n");
    printf("Digite um numero: \n");
    scanf("%d", &n1);
    printf("Digite mais um numero: \n");
    scanf("%d", &n2);
    resultado =  n1 - n2;
    printf("%d - %d = %d \n", n1, n2, resultado);


    printf("Aperte 1 para limpar \n");
     scanf("%d", &limpa);
    if (limpa == 1){
        system("cls");
    }else{
        while(limpa != 1){
          printf("Digite 1 para prosseguir! \n");
          scanf("%d", &limpa);
            if (limpa == 1){
            system("cls");
            }
        }
    }

   menu();
}
//************************************DIVISÃO****************************************
if (opcao == 3){
    printf("*****DIVISAO***** \n");
    printf("Digite um numero: \n");
    scanf("%f", &nD1);
    printf("Digite mais um numero: \n");
    scanf("%f", &nD2);
    resultadoDivisao =  nD1 / nD2;
    printf("%2.f / %2.f = %f \n", nD1, nD2, resultadoDivisao);


    printf("Aperte 1 para limpar \n");
     scanf("%d", &limpa);
    if (limpa == 1){
        system("cls");
    }else{
        while(limpa != 1){
          printf("Digite 1 para prosseguir! \n");
          scanf("%d", &limpa);
            if (limpa == 1){
            system("cls");
            }
        }
    }

    menu();
}
//************************************MULTIPLICAÇÃO****************************************
if (opcao == 4){
    printf("*****MULTIPLICACAO***** \n");
    printf("Digite um numero: \n");
    scanf("%d", &n1);
    printf("Digite mais um numero: \n");
    scanf("%d", &n2);
    resultado =  n1 * n2;
    printf("%d x %d = %d \n", n1, n2, resultado);


    printf("Aperte 1 para limpar \n");
     scanf("%d", &limpa);
    if (limpa == 1){
        system("cls");
    }else{
        while(limpa != 1){
          printf("Digite 1 para prosseguir! \n");
          scanf("%d", &limpa);
            if (limpa == 1){
            system("cls");

            }
        }
    }
    menu();
}
//************************************SAIR****************************************
if (opcao == 5){
    printf("Saindo hehe");
}
 }
    return 0;
}

