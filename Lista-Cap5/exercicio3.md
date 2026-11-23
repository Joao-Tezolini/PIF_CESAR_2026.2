3.
a)
- `void exibe_mensagem(char* msg);` -> tem parâmetro de entrada (`char* msg`) e não tem valor de retorno (`void`).
- `int obter_codigo(void);` -> não tem parâmetro de entrada (`void`) e tem valor de retorno (`int`).
- `void limpar_tela(void);` -> não tem parâmetro de entrada (`void`) e não tem valor de retorno (`void`).

b) Uma função com retorno calcula e devolve um valor para ser usado em variáveis ou expressões no programa, enquanto um procedimento (função `void`) apenas executa uma ação sem devolver nenhum resultado. A função com retorno é mais adequada quando precisamos de um valor calculado, como calcular a média de notas; já o procedimento é melhor para tarefas como exibir um menu ou limpar a tela.
c) Não é válida. Como `limpar_tela()` é do tipo `void`, ela não retorna nenhum valor, então não há nada para atribuir à variável `x`, o que gera erro de compilação.
