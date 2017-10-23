#ifndef _TRAVERSAL_H
#define _TRAVERSAL_H
#include "Node.h"


void inOderTreeTraversal(Node *node);
void preOderTreeTraversal(Node *node);
void postOderTreeTraversal(Node *node);
void _inOderTreeTraversal(Node *node,void(*print)(Node *node));
#endif // _TRAVERSAL_H
