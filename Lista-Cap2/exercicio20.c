#include <stdio.h>
#include <math.h>

int main() {
    int cat_a, cat_b;

    printf("Insira os valores do cateto A e cateto B (use espacos)\npara calcular a hipotenusa do triangulo retangulo: ");
    scanf("%d %d", &cat_a, &cat_b);

    int soma = pow(cat_a, 2) + pow(cat_b,2);
    float hip = sqrt(soma);

    // vamos entender como separamos a parte que sai da raiz e a que fica
    // precisamos achar o maior quadrado perfeito dentro da raiz (valor 'soma')
    // vamos dividir 'soma' por todos os quadrados perfeitos ate o valor desse quadrado ser menor ou igual a 'soma'
    // isso garante que o valor que ficar dentro da raiz eh o menor possivel

    // esse loop procura o coeficiente que ficara fora da raiz
    int c = 1; // se a raiz for perfeita, omitiremos o coeficiente fora da raiz
    int raiz = soma; // essa variavel sera impressa dentro da raiz / no momento a soma por completo esta dentro da raiz
    for(int i = 1; (i * i) <= soma; i++) {
        if(soma % (i * i) == 0){
            c = i;
            raiz = soma / (i * i);
        }
    }

    // ao final do loop teremos o valor do coeficiente e da raiz 

    printf("O valor da hipotenusa eh: ");

    // caso a raiz seja exata
    if(raiz == 1) { 
        printf("%d\n", c);
    }

    // caso seja uma raiz sem simplificacao
    else if(c == 1) {
        printf("raiz de %d\n", raiz);
    }

    // caso seja uma raiz nao exata mas com simplificacao
    else {
        printf("%d raiz de %d\n", c, raiz);
    }

    return 0;
}