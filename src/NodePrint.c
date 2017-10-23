#include <stdio.h>
#include "NodePrint.h"




void printInteger(Node *node){
  printf("(**)%d,",node->data);
}


void printString(Node *node){
  printf("%s,",node->data);
}
