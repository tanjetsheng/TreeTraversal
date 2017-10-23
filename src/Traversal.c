#include <stdio.h>
#include "Traversal.h"
#include "Node.h"




void _inOderTreeTraversal(Node *node,void(*print)(Node *node)){
  if(node->left !=NULL)
  _inOderTreeTraversal(node->left,print);
  print(node);
  if(node->right !=NULL)
  _inOderTreeTraversal(node->right,print);
}

void inOderTreeTraversal(Node *node){
  if(node->left !=NULL)
  inOderTreeTraversal(node->left);
  printf("%d, ", node->data);
  if(node->right !=NULL)
  inOderTreeTraversal(node->right);
}

void preOderTreeTraversal(Node *node){
  printf("%d, ",node->data);
  if(node->left !=NULL)
  preOderTreeTraversal(node->left);
  if(node->right !=NULL)
  preOderTreeTraversal(node->right);
}

void postOderTreeTraversal(Node *node){
  if(node->left !=NULL)
  postOderTreeTraversal(node->left);
  if(node->right !=NULL)
  postOderTreeTraversal(node->right);
  printf("%d, ",node->data);
}
