/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:43:25 by gt-serst          #+#    #+#             */
/*   Updated: 2023/06/14 16:53:30 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			tmp;
	unsigned char	*p;

	tmp = 0;
	p = s;
	while (tmp != n)
	{
		p[tmp] = 0;
		tmp++;
	}
}

/*
int main()
{
	char	str[50] = "Aticleworld is a programming Blog.";

	ft_bzero(str + 13, 0);
	printf("%s\n", str);
	bzero(str + 13, 8*sizeof(char));
	return (0);
}
*/
