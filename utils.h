#include "graph.h"
#include<stdbool.h>
#include<stdlib.h>

#ifndef UTILS_H
#define UTILS_H
/* Calcul la distance entre deux sommets 's1' et 's2' */
double distance(Coordonnees c, int s1, int s2);
bool est_present(int* tab, int n, int i);
#endif
