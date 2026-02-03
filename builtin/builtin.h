#ifndef BUILTIN_H
#define BUILTIN_H

# include "../libft/libft.h" 
# include "../parse/parse.h"


typedef struct s_envp{
    char *key;
    char *value;
    struct s_envp *next;
} t_envp ;

int ft_strcmp(const char *s1, const char *s2);
void    get_envp(t_envp **env_head, char **envp);
void    free_envp_list(t_envp **envp);
int is_builtin(char *cmd);
int pwd_builtin(void);
int echo_builtin(char **cmd_argv);
int env_builtin(char **cmd_argv, t_envp *env_list);

#endif