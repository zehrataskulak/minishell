#ifndef BUILTIN_H
#define BUILTIN_H

# include "../libft/libft.h" 
# include "../parse/parse.h"


typedef struct s_envp{
    char *key;
    char *value;
    struct s_envp *next;
} t_envp ;

void    get_envp(t_envp **env_head, char **envp);
void    free_envp_list(t_envp **envp);

#endif