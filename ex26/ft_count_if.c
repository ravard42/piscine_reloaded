/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 23:20:01 by ravard            #+#    #+#             */
/*   Updated: 2016/11/14 23:32:35 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int		ret;
	int		i;

	ret = 0;
	i = -1;
	while (tab[++i])
		ret = (f(tab[i]) == 1) ? ret + 1 : ret;
	return (ret);
}
