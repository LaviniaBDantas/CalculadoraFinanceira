#include <stdio.h>
#include <stdlib.h>

int main(void){
    int menu,op;
    float j,i, c, t;
    printf("Selecione a opcao desejada: \n1- Juros Simples \n2- Taxa de Desconto\n");
    scanf("%d", &menu);
    switch(menu){
        case 1:
        printf("O que deseja calcular?\n 1-Capital \n2-Montante \n3-Juros \n4-Taxa \n5-Tempo");
        scanf("%d", &op);
        switch(op){
            case 1:
            printf("Digite o juros:\n");
            scanf("%f", &j);
            printf("Digite a taxa de juros:\n");
            
            scanf("%f", &i);
            i=i/100;
            printf("Digite o tempo:\n");
            scanf("%d", &t);
            printf("\nO capital inicial: %.2f",j/(i*t));

            case 2:
            printf("Digite o capital: \n");
            scanf("%f", &c);
            printf("Digite o juros:\n");
            scanf("%f", &j);
            printf("\nO montante: %.2f", c+j);

            case 3:
            printf("Digite o capital: \n");
            scanf("%f", &c);
            printf("Digite a taxa de juros:\n");
            scanf("%f", &i);
            i=i/100;
            printf("Digite o tempo:\n");
            scanf("%d", &t);
            printf("\nOs juros: %.2f", c*i*t);

            case 4:
            printf("Digite o juros:\n");
            scanf("%f", &j);
            printf("Digite o capital: \n"); 
            scanf("%f", &c);
            printf("Digite o tempo:\n");
            scanf("%d", &t);
            printf("\nTaxa de Juros: %.2f %", j/(c*t));

            case 5:
            printf("Digite o juros:\n");
            scanf("%f", &j);
            printf("Digite o capital: \n"); 
            scanf("%f", &c);
            printf("Digite a taxa de juros:\n");
            scanf("%f", &i);
            i=i/100;
            printf("%f", i);
            printf("O tempo: %.2f ", j/(c*i));
        }
    }
}