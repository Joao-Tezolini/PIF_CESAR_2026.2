#include <stdio.h>
#include <stdlib.h>;
int Main{}
(
printf( Existem %d semanas no ano.,52);
cout << endl;
system("PAUSE");
return 0;
)

Comentários sobre o erro do código:
1°: não se poe ";" após a declaração de bibliotecas
2°: main: o código da função "main" deve ser escrito entre os "{}" e não entre os "()"; além disso, a linguagem C é sensitiva a caixa alta e "main" deve ser escrita inteiramente em caixa baixa
3°: dentro do "printf()" não foi colocado as aspas duplas necessárias para imprimir texto
4°: a sexta linha usa código C++ e não C
5°: todos os comandos da main não estão indentados 

segue o código corrijido:

#include <stdio.h>
#include <stdlib.h>;

int main() {
    printf("Existem %d semanas no ano.", 52);
    system("PAUSE");
    return 0;
}
