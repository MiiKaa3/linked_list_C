#include <stdlib.h>
#include <stdio.h>
#include "mks_LL.h"

Node_t* head = NULL;

Node_t* mks_ll_next(Node_t* current)
{
  return current->next;
}

int mks_ll_push(int data)
{
  Node_t* newNode = (Node_t*)malloc(sizeof(Node_t));
  if (!newNode)
  {
    fprintf(stderr, "malloc failed!\n");
    return 1;
  }

  *newNode = (Node_t){
    .next = head,
    .data = data
  };

  head = newNode;

  return 0;
}

int mks_ll_pop(void)
{
  Node_t* popNode = head;
  if (head)
    head = head->next;
  else
    head = NULL;
  free(popNode);
  return 0;
}