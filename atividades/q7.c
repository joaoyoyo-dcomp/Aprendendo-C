/*
No período de 2024.2 o prof. Calebe decidiu avaliar seus alunos de uma forma diferente na disciplina de Arquitetura de
Computadores.
A nova forma de avaliação consistia em uma única unidade com várias etapas, tendo ao total 4 trabalhos (T1, T2, T3, T4),
1 seminário (S) e 2 provas (P1 e P2), todas podendo ser avaliadas de 0 a 10.
A nota final da disciplina era calculada da seguinte forma:
NF (Nota Final) = (NT*4 + NS*2 + NP*4) / 10
Sendo:
NT (Nota dos trabalhos) = (T1*1 + T2*2 + T3*3 + T4*2) / 8
NS (Nota do seminário) = S
NP (Nota das provas) = (P1*4 + P2*6) / 10

Devido a quantidade de alunos e notas, a planilha de Calebe ficou cheia de linhas e colunas tornando difícil a leitura e cálculo
das notas finais.
Para ajudar o prof. Calebe nas próximas turmas de Arquitetura, crie um programa que leia as notas de T1, T2, T3, T4, S, P1 e
P2 de um aluno e exiba a NT, NS, NP e a NF com precisão de duas casas decimais.
*/
#include <stdio.h>
int main(){
 
float T1, T2, T3, T4, S, P1, P2;
float Nt, Ns, Np, Nf;
printf("Notas:\n");
scanf("%f %f %f %f %f %f %f", &T1, &T2, &T3, &T4, &S, &P1, &P2);

Nt = (T1*1+T2*2+T3*3+T4*2)/8.0;
Ns = S;
Np = (P1*4+P2*6)/10.0;
Nf = (Nt*4 + Ns*2 + Np*4)/10.0;
printf("NT = %.2f\n", Nt);
printf("NS = %.2f\n", Ns);
printf("NP = %.2f\n", Np);
printf("A nota final do aluno eh: %.2f\n", Nf);
return 0;
}
