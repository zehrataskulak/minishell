#include "builtin.h"

int echo_builtin(char **cmd_argv)
{
    int i;
    int nw_line;
    
    i = 1;
    nw_line = 1;
    
    while(cmd_argv[i] && ft_strcmp(cmd_argv[i], "-n") == 0)
    {
        nw_line = 0;
        i++;
    }
    while(cmd_argv[i])
    {
        printf("%s", cmd_argv[i]);
        if(cmd_argv[i + 1])
            printf(" ");
        i++;
    }
    if(nw_line)
        printf("\n");
    return (0);
}