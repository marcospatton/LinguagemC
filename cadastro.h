#ifndef _CADASTRO_H
#define _CADASTRO_H

#define N 50

typedef struct{
    char Nome[N];
    int Data_nascimento[3]; // {dia,mes,ano} ex: {10,7,1991}
    int Ano_ingresso;
    char Curso[N];
    float notas[3];
    int faltas;
    int situacao; // 0 = reprovado, 1 = aprovado
}Aluno;

typedef struct{
    Aluno alunos[N];
    int numero_alunos;
}Turma;

void cadastrar_aluno(Turma *nova_turma);

#endif