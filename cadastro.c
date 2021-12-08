#include <stdio.h>
#include "cadastro.h"

void cadastrar_aluno(Turma *nova_turma){
    if(nova_turma->numero_alunos < N){
        printf("Digite o nome do novo aluno: ");
        fflush(stdin); // limpar o buffer
        //stdin (standard input) = entrada padrão (teclado)
        fgets(nova_turma->alunos[nova_turma->numero_alunos].Nome,N,stdin);
        nova_turma->numero_alunos++;
        /*
        PARA O TRABALHO: INSERIR AS DEMAIS INFORMAÇÕES
        DO ALUNO (DATA DE NASCIMENTO, ANO DE INGRESSO,ETC.)
        */
    }
    else
        printf("Turma cheia!\n");
}