#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escrevaNome(); // Prototipo de Fun��o......

int main(){
    
    setlocale(LC_ALL, "");
    escrevaNome();
    escrevaNome();
    escrevaNome();
    return 0;
}

void escreveNome(){
     
     printf("Bem-Vindo � B�son Treinamento em Tecnologia.\n");
     return 0;
}
