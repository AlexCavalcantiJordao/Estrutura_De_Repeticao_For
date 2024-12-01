#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escrevaNome(); // Prototipo de Função......

int main(){
    
    setlocale(LC_ALL, "");
    escrevaNome();
    escrevaNome();
    escrevaNome();
    return 0;
}

void escreveNome(){
     
     printf("Bem-Vindo á Bóson Treinamento em Tecnologia.\n");
     return 0;
}
