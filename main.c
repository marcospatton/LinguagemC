#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "cadastro.h"

int main(){
    Turma nova_turma;
    int i;

    nova_turma.numero_alunos = 0;
    cadastrar_aluno(&nova_turma);
    // Exibindo o nome do novo aluno cadastrado:
    for(i = 0; i < strlen(nova_turma.alunos[0].Nome);i++){
        printf("%c",nova_turma.alunos[0].Nome[i]);
    }
    printf("\n");

    return 0;
}