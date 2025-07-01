#include <stdio.h>
#include <stdlib.h>
int main(int _argv, char **_argc) {
short int *i = NULL;
short int *j = NULL;
i = malloc(sizeof(short int) * 1);
j = calloc(1, sizeof(short int));
printf("i:%p, &d:%p, *i:%d\n", i, &i, *i);
printf("j:%p, &j:%p, *j:%d\n", j, &j, *j);
*i = 100;
j = i;
printf("i:%p, &d:%p, *i:%d\n", i, &i, *i);
printf("j:%p, &j:%p, *j:%d\n", j, &j, *j);
free(i);
free(j);
return 0;
}
