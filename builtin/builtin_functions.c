#include "builtin.h"

int ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int is_builtin(char *cmd)
{
    if (!cmd)
        return (0);
    if (!ft_strcmp(cmd, "echo"))
        return (1);
    if (!ft_strcmp(cmd, "cd"))
        return (1);
    if (!ft_strcmp(cmd, "pwd"))
        return (1);
    if (!ft_strcmp(cmd, "export"))
        return (1);
    if (!ft_strcmp(cmd, "unset"))
        return (1);
    if (!ft_strcmp(cmd, "env"))
        return (1);
    if (!ft_strcmp(cmd, "exit"))
        return (1);
    return (0);
}

/*int exec_builtin(t_cmds *cmd, t_envp **env)
{
    char *name;

    name = cmd->argv[0];
    if (!name)
        return (0);

    if (!ft_strcmp(name, "echo"))
        return (echo_builtin(cmd->argv));
    if (!ft_strcmp(name, "cd"))
        return (cd_builtin(cmd->argv, env));
    if (!ft_strcmp(name, "pwd"))
        return (pwd_builtin());
    if (!ft_strcmp(name, "export"))
        return (export_builtin(cmd->argv, env));
    if (!ft_strcmp(name, "unset"))
        return (unset_builtin(cmd->argv, env));
    if (!ft_strcmp(name, "env"))
        return (env_builtin(*env));
    if (!ft_strcmp(name, "exit"))
        return (exit_builtin(cmd->argv));

    return (0);
}*/