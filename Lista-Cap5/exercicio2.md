2.
a) Em C, uma função só pode devolver um único valor usando o comando `return`. Em `calcular()`, o programador pretendia retornar tanto `soma` quanto `media` ao mesmo tempo, mas isso não funciona porque a vírgula em `return soma, media;` age como o operador vírgula do C: ele avalia `soma`, descarta esse valor e retorna apenas a última expressão (`media`).
b) O `return;` encerra imediatamente a execução da função `imprime_mensagem()` e volta para onde ela foi chamada, evitando que o segundo `printf` rode quando `erro < 0`. Ele não é obrigatório no final de uma função `void`, pois ao chegar na chave de fechamento `}` a função já termina automaticamente sem precisar devolver valor.
c)

```c
int calcular(int a, int b, int c) {
    int soma = a + b + c;
    int media = soma / 3;
    return media;
}

int somar(int a, int b, int c) {
    return a + b + c;
}
```

Precisamos de duas funções separadas porque o comando `return` em C só devolve um único valor por chamada; então, usando apenas `return`, cada função fica responsável por retornar um dos resultados.
