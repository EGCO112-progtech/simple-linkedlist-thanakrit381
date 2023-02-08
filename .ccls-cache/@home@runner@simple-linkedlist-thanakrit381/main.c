//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
  int c = 5;
  struct node *head;
  typedef struct node Node;
  typedef Node *NodePtr;

  NodePtr p = (NodePtr)malloc(sizeof(Node));
  head = p;
  p->value = c;
  int i, n = 4;

  for (int i = 0; i < n; i++) {
    p->next = (NodePtr)malloc(sizeof(Node));
    p = p->next;
    p->value = c + i + 1;
    p->next = NULL;
  }

  typedef struct node *NodePtr;
  NodePtr tmp = head;

  tmp = head;
  while (tmp != NULL) {
    printf("%3d->", tmp->value);
    tmp = tmp->next;
  }
  printf("NULL\n");

  tmp = head;
  while (tmp != NULL) {
    struct node *next = tmp->next;
    free(tmp);
    tmp = next;
  }

  return 0;
}
