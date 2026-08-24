1°: Nada vai ser reconhecido pelo compilador sem a declaração e importação as bibliotecas necessárias, nesse caso são as stdio.h e stdlib.h .
2°: Não deve se por ";" após "a=1" pois o sinal de ponto e vírgula indica o fim da linha. Nesse caso, usa-se a vírgula simples, para indicar que o tipo "int" se aplica a "a", "b" e "c". 
3°: A função "printf()" está incompleta; falta uma aspas duplas ao final da sentença que será impressa no terminal, após "\n". Além disso, apenas 3 variáveis são declaradas: a, b e c. O correto seria declarar a variável d, ou então apagar o quarto "%d" e "d" de dentro do "printf()".
4°: Assim como na questão anterior, é de boa prática colocar o "return 0" ao final da função "main" já que ela deve retornar um valor inteiro e "return 0" significa que chegamos ai final da função sem erros ou problemas.
5°: Assim como na questão anterior, a comando "pause" dentro do comando "system()" é nativo apenas do Windows, e não funcionará dentro de máquinas Linux ou MacOS.
