#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av) {
  if (ac == 0 || av == NULL) {
    return NULL;
  }

  int total_len = 0;
  for (int i = 0; i < ac; i++) {
    total_len += strlen(av[i]) + 1; /** +1 for the newline character **/
  }

  char *args_str = malloc(total_len * sizeof(char));
  if (args_str == NULL) {
    return NULL;
  }

  args_str[0] = '\0';
  for (int i = 0; i < ac; i++) {
    strcat(args_str, av[i]);
    strcat(args_str, "\n");
  }

  return args_str;
}
