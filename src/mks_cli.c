#include <stdlib.h>
#include <stdio.h>
#include "mks_cli.h"
#include "mks_LL.h"

void mks_cli_print(void)
{
  if (!head)
  {
    printf("(%p)\t{ %p, %p }\n", (void*)head, NULL, NULL);
    return;
  }

  Node_t* current = head;
  do
    printf("(%p)\t{ %p, %d }\n", (void*)current, current->next, current->data);
  while ((current = mks_ll_next(current)));
}

cliResult_t mks_cli_run(cliResult_t* entry)
{
  printf(
    "[%d] Push Node\n[%d] Pop Node\n[%d] Print\n[%d] Exit\n",
    (int)MKS_CLI_PUSH,
    (int)MKS_CLI_POP,
    (int)MKS_CLI_PRINT,
    (int)MKS_CLI_EXIT
  );
  scanf("%d", (int*)entry);
  return *entry;
}

int mks_cli_pushInit(void)
{
  int data;
  printf("Enter an integer: ");
  scanf("%d", &data);
  return data;
}

void mks_cli_pushTerm(int code)
{
  switch(code)
  {
    case 0: printf("Success!\n"); break;
    case 1: fprintf(stderr, "Failed to push node!\n"); break;
    default: fprintf(stderr, "This was VERY unexpected :/\n"); break;
  }
}

void mks_cli_pop(int code)
{
  switch(code)
  {
    case 0: printf("Success!\n"); break;
    case 1: fprintf(stderr, "Failed to pop node!\n"); break;
    default: fprintf(stderr, "This was VERY unexpected :/\n"); break;
  }
}