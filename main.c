#include<stdio.h>

// funcao para ler a temperatura
int lerTemperatura(){
    int valorDigitado;
    printf("Digite a temperatura: ");
    scanf("%d", &valorDigitado);
    return valorDigitado ;
}

//funcao para analisar a temperatura
int analisarTemperatura(int temperatura){
    int temperaturaMinima = 20;
    int temperaturaMaxima = 24;

    if(temperatura < temperaturaMinima){
        return 1;
    } else if( temperatura > temperaturaMaxima){
        return 2;
    } else {
        return 3;
    } 
}

// funcao de controle 
void exibirResultado(int resultado){
    if (resultado == 1) {
        printf("Aquecendo...\n");
    }
    else if (resultado == 2) {
        printf("Resfriando...\n");
    }
    else {
        printf("Temperatura estavel.\n");
    }
}

// corpo principal do codigo onde chamo minhas funcoes de acordo com os comando if e else
int main(){
    // estou chamando a funcao de leitura da temperatura
    int temperatura = lerTemperatura();
    
    //estou chamando a funcao de analisar a temperatura
    int resultado = analisarTemperatura(temperatura);

    //estou exibindo o resultado
    exibirResultado(resultado);
    
    return 0;
}