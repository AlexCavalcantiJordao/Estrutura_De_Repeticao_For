#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include num_L 5
#include num_C 4

int main(){
    
    setlocale(LC_ALL, "");
    int linha, coluna;
    
    float notas[num_L] [num_C] = {{7.5, 6.8, 9.6, 6.7},
                                   {6.5, 6.3, 8.4, 7.6},
                                   {5.6, 8.6, 9.0, 4.5},
                                   {4.5, 5.8, 6.8, 7.0},
                                   {3.6, 7.6, 8.1, 6.5}};
                                   
    printf("Exibindo o conteúdo da matriz declarado e inicilizado: \n\n");
    
    for(linha = 0; linha < num_L; linha++){
        for(coluna = 0; coluna < num_C, coluna++){
           printf("%5.1f", nota[linha][coluna])
        }
        printf("\n");          
    } 
    printf("\nValor do elemento na 2º Linha, 3º Coluna: %4.2\n", notas[1][2]);
    return 0;
}
