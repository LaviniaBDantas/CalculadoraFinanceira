#include <stdio.h>
#include <stdlib.h>

float converteTaxa(float taxa){
    int tipo;
    taxa=taxa/100;
    printf("Qual o tipo da taxa de juros? 1-Diaria, 2-Mensal, 3-Bimestral, 4-Trimestral, 5-Quadrimestral 6-Semestral 7-Anual\n");
    scanf("%d", &tipo);
    switch(tipo){
        case 1:
            taxa=taxa*30;
        break;
        case 2:
            taxa=taxa;
        break;
        case 3:
            taxa=taxa/2;
        break;
        case 4:
            taxa=taxa/3;
        break;
        case 5:
            taxa=taxa/4;
        break;
        case 6:
            taxa=taxa/6;
        break;
        case 7:
            taxa=taxa/12;
        break;
    }
    return taxa;
}

int main(void){
    int menu,op;
    float j,i, c, t, ic;
    printf("Selecione a opcao desejada: \n1- Juros Simples \n2- Taxa de Desconto\n");
    scanf("%d", &menu);
    switch(menu){
        case 1:
            printf("O que deseja calcular?\n 1-Capital \n2-Montante \n3-Juros \n4-Taxa \n5-Tempo\n");
            scanf("%d", &op);
            switch(op){
                case 1:
                    printf("Digite o juros:\n");
                    scanf("%f", &j);
                    printf("Digite o valor da taxa de juros:\n");
                    scanf("%f", &i);
                    i= converteTaxa(i);
                    printf("Digite o tempo mensal:\n");
                    scanf("%f", &t);
                    printf("\nO capital inicial: %.2f",j/(i*t));
                break;
                case 2:
                    printf("Digite o capital: \n");
                    scanf("%f", &c);
                    printf("Digite o juros:\n");
                    scanf("%f", &j);
                    printf("\nO montante: %.2f", c+j);
                break;
                case 3:
                    printf("Digite o capital: \n");
                    scanf("%f", &c);
                    printf("Digite o valor da taxa de juros:\n");
                    scanf("%f", &i);
                    i= converteTaxa(i);
                    printf("Digite o tempo mensal:\n");
                    scanf("%f", &t);
                    printf("\nOs juros: %.2f", c*i*t);
                break;
                case 4:
                    printf("Digite o juros:\n");
                    scanf("%f", &j);
                    printf("Digite o capital: \n"); 
                    scanf("%f", &c);
                    printf("Digite o tempo mensal:\n");
                    scanf("%f", &t);
                    printf("\nTaxa de Juros mensal: %.2f %", j/(c*t));
                break;
                case 5:
                    printf("Digite o juros:\n");
                    scanf("%f", &j);
                    printf("Digite o capital: \n"); 
                    scanf("%f", &c);
                    printf("Digite o valor da taxa de juros:\n");
                    scanf("%f", &i);
                    i= converteTaxa(i);
                    printf("%f", i);
                    printf("O tempo em meses: %.2f ", j/(c*i));
                break;
            }
            break;
        case 2:
            printf("O que deseja calcular?\n 1-Taxa de desconto comercial \n2-Taxa efetiva\n");
            scanf("%d", &op);
            if(op==1){
                printf("Digite a taxa efetiva:\n");
                scanf("%f", &i);
                i= converteTaxa(i);
                printf("Digite o tempo mensal:");
                scanf("%f", &t);
                printf("Taxa comercial: %.2f %", (i/(1+i*t))*100);
            }else if (op==2){
                printf("Digite a taxa comercial:");
                scanf("%f", &ic);
                ic= converteTaxa(ic);
                printf("Digite o tempo mensal:");
                scanf("%f", &t);
                printf("Taxa efetiva: %.2f ", (ic/(1-(ic*t)))*100);
            }else{
                printf("Invalido..");
            }
        break;
    }
}