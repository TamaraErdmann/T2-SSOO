#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "entidades.h"
#include "../file_manager/manager.h"

int main(int argc, char **argv)
{
  printf("Hello T2!\n");

  InputFile *file = read_file("input.txt");

  printf("Reading file of length %i:\n", file->len);
  for (int i = 0; i < file->len; i++)
  {
    char **line = file->lines[i];
    printf(
        "\tProcess %s from factory %s has init time of %s and %s bursts.\n",
        line[0], line[2], line[1], line[3]);
    // Por cada proceso, "instanciaria" su struct Proceso aqui
  }
  // Crearia la cola de procesos aqui, bajo un struct
  // Crearia el scheduler aqui, bajo un struct

  // Iniciaria la simulacion aqui (y, por lo tanto, el contador de tiempo)
  int tiempo = 0;
}
