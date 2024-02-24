#ifndef MKS_CLI_H
#define MKS_CLI_H

typedef enum cliResult
{
  MKS_CLI_EXIT = 0,
  MKS_CLI_PUSH = 1,
  MKS_CLI_POP = 2,
  MKS_CLI_PRINT
} cliResult_t;

void mks_cli_print(void);
cliResult_t mks_cli_run(cliResult_t* entry);
int mks_cli_pushInit(void);
void mks_cli_pushTerm(int code);
void mks_cli_pop(int code);

#endif
