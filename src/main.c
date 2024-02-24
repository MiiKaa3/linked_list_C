#include <stdlib.h>
#include <stdio.h>
#include "mks_cli.h"
#include "mks_LL.h"

int main(int argc, char** argv)
{
  cliResult_t entry;
  int data, success;
  
  while (mks_cli_run(&entry))
  {
    switch (entry)
    {
      case MKS_CLI_PUSH:
        data = mks_cli_pushInit();
        success = mks_ll_push(data);
        mks_cli_pushTerm(success);
        break;
      case MKS_CLI_POP:
        success = mks_ll_pop();
        mks_cli_pop(success);
        break;
      case MKS_CLI_PRINT:
        mks_cli_print();
        break;
      default:
        printf("Error! Unrecognised option\n");
        break;
    }
  }
  
  printf("Exiting!\n");
  return 0;
}
