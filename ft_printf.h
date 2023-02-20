/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:33:46 by gt-serst          #+#    #+#             */
/*   Updated: 2023/01/20 15:48:41 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_printchar(char c);
int	ft_printstr(char *s);
int	ft_print_address(unsigned long nbr, char *base);
int	ft_printnbr_base(long nbr, char *base);

#endif
