O que são variáveis?
Variável -> formado por 4 partes. Tipo, nome, valor (conteúdo), endereço.

  Uma variável é uma região da memória (endereço), identificada por um nome, interpretada de acordo com um tipo, e que armazena um valor (conteúdo).

## tipo | formato | tamanho | descrição | exemplo
:---|---|---|---|---:
char | %c | 1 | caractere | "L"
int | %d | 4 | inteiro | 2025
float | %f | 4 | real | 3.14
double | %lf | 8 | real | 2.71828
char[] | %s | depende | frase | "muito fácil"
(tipo)* | %p | 8 | endereço de memória | 0x7ffcb98e14a4


 especificador | formato
:-----:|:------:
d, i | inteiros (int, integer)
x | hexadecimal
f | float (casas decimais)
lf | double
e | notação científica
c | caracteres alfanuméricos
s | string (sequência de caracteres)
p | ponteiro (endereço  de memória)
.num | quantidade de dígitos após o ponto

## Sequências de escape

escape | descrição
:-----:|:------:
\a | alarme sonoro
\b | backspace
\n | quebra de linha
\t | tabulação (TAB)
\r | inicio da linha
\0 | caractere nulo
\v | tabulação vertical
\\ | caractere \
\' | Caractere '
\" | Caractere "
\? | Caractere ?
\123 | código ASCII (octal)
\X12 | código ASCII (hexadecimal)
%% | Caractere %
