#ifndef MKS_LL_H
#define MKS_LL_H

typedef struct Node
{
  void* next;
  int data;
} Node_t;

extern Node_t* head;

Node_t* mks_ll_next(Node_t* current);
int mks_ll_push(int data);
int mks_ll_pop(void);

#endif
