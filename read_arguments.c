#include "push_swap.h"


void	read_1(int argc, char **argv, t_zlist **stack_a)
{
	t_zlist	*tmp;
	int	*cont;
	int i = argc - 1;

	while (i > 0)
	{
		cont = malloc(sizeof(int));
		if(cont == NULL)
			return ;
		*cont = ft_atoi(argv[i--]);
		tmp = t_zlstnew(cont);
		t_zlstadd_front(stack_a, tmp);
	}
	
}
void	read_2(char **argv, t_zlist **stack_a)
{
	char	**args;
	int	*cont;
	t_zlist	*tmp;
	int	i;
	int j;

	i = 0;
	j = 0;
	args = ft_split(argv[1], ' ');
	while (args[i])
	{
		cont = malloc(sizeof(int));
		if(cont == NULL)
			return ;
		*cont = ft_atoi(args[i++]);
		tmp = t_zlstnew(cont);
		t_zlstadd_front(stack_a, tmp);
	}
	while(args[j])      ////tüm listeyi clelar ladıktan sonra (t_zlstclear()) tekrar aç ve kontrol et. 
		free(args[j++]);
	free(args);
}



void	read_arguments(int argc, char **argv, t_zlist **stack_a)
{
	if(argc == 2)
		read_2(argv, stack_a);
	else
		read_1(argc, argv, stack_a);
}