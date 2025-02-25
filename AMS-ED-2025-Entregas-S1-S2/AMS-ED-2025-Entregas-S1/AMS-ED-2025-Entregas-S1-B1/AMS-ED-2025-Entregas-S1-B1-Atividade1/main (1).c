/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


void aplicarDesconto(float *preco, float desconto) {
    *preco -= (*preco * (desconto / 100));
}

int main() {
    float preco, desconto;
    
    
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    
    
    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);
    
    
    printf("Preco original: R$%.2f\n", preco);
    

    aplicarDesconto(&preco, desconto);
    

    printf("Desconto aplicado: %.2f%%\n", desconto);
    printf("Preco final: R$%.2f\n", preco);
    
    return 0;
}
