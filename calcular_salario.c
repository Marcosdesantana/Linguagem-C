#include<stdio.h>

// declaracao de variaveis

char nome[30];
int horas_trabalhadas;
float valor_horas;
float salario; 

//funcao para calcular o salario

float calcular_salario(int horas_trabalhadas , float valor_horas){
     
    float total;

    if(horas_trabalhadas > 40){
        printf("houve horas extras \n");
       int horas_extras = horas_trabalhadas - 40; 
       float valor = 40 * valor_horas;
       float adicional = valor_horas / 2;
       float valor_extra = horas_extras * (valor_horas + adicional) ; 
       total = valor + valor_extra ;
    }else{
        printf("Nao houve horas extras \n");
       total = horas_trabalhadas * valor_horas;
    }
    return total;
}

// funcao principal

int main(){

    // pegando os dados

    printf("nome do fucionario: \n");
    scanf("%s" , nome );
    printf("horas trabalhadas: \n ");
    scanf("%d" , &horas_trabalhadas);
    printf("valor da hora: \n");
    scanf("%f", &valor_horas);

    salario = calcular_salario(horas_trabalhadas , valor_horas);

    printf("o fucionario %s teve um total de %d horas trabalhadas e seu salario e: %.2f" ,  nome , horas_trabalhadas , salario);

    return 0 ;

}