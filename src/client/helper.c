#include <unistd.h> 

#include "common/protocol.h"

void helper() {
    // Introduction
    WRITE_LITERAL(1,"\n---->>>> Here's a list of the avalaible commands! <<<<----\n\n");

    // Tempo Inactividade
    WRITE_LITERAL(1," -i <argumento1>, tempo-inatividade <argumento1>\n-> Define o tempo máximo, em segundos, de inatividade de comunicação num pipe anónimo\n\n");

    // Tempo Execução
    WRITE_LITERAL(1," -m <argumento1>, tempo-execucao <argumento1>\n-> Define o tempo máximo (segundos) de execução de uma tarefa\n\n");

    // Executar Tarefas
    WRITE_LITERAL(1," -e <p1|p2|...|pn>, executar <p1|..|pn>\n-> Executa uma tarefa da linha de comandos\n\n");

    // Listar Tarefas
    WRITE_LITERAL(1," -l, listar\n-> Lista as tarefas em execução\n\n");

    // Terminar Tarefas
    WRITE_LITERAL(1," -t n, terminar	n\n-> Termina uma tarefa em execução\n\n");

    // Historico
    WRITE_LITERAL(1," -r, historico\n-> Histórico de tarefas terminadas\n\n");
}

