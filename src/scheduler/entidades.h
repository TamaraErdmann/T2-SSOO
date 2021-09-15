#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef enum estado{
    running,
    ready,
    wating,
    finished,
} Estado;

typedef struct proceso{
    int pid;
    char* nombre;
    Estado estado;
    int id_fabrica;
    int tiempo_llegada;
    int cantidad_rafagas;
    int* Ai;
    int* Bi;
} Process;