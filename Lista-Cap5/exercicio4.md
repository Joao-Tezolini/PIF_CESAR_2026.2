4.
a) O caso base é `n == 0` (que retorna `1`) e o passo recursivo é `(long)n * fatorial(n - 1)`. Se o caso base fosse removido, a função nunca pararia de chamar a si mesma (diminuindo `n` indefinidamente para valores negativos), gerando recursão infinita até o programa travar por estouro de pilha (stack overflow).
b)
Empilhamento:
- `fatorial(4)` chama `4 * fatorial(3)`
- `fatorial(3)` chama `3 * fatorial(2)`
- `fatorial(2)` chama `2 * fatorial(1)`
- `fatorial(1)` chama `1 * fatorial(0)`
- `fatorial(0)` atinge o caso base e retorna `1`

Desempilhamento:
- `fatorial(1)` recebe `1` e retorna `1 * 1 = 1`
- `fatorial(2)` recebe `1` e retorna `2 * 1 = 2`
- `fatorial(3)` recebe `2` e retorna `3 * 2 = 6`
- `fatorial(4)` recebe `6` e retorna `4 * 6 = 24`

c) A cada chamada recursiva, um novo registro (stack frame) é empilhado na pilha de execução na memória para guardar o parâmetro, variáveis locais e o ponto de retorno daquela chamada, ficando ocupado até ela finalizar. Como o tamanho da pilha é limitado, uma recursão sem caso base empilha chamadas sem nunca desempilhar, esgotando a memória da pilha e causando falha no programa por estouro de pilha (stack overflow).
