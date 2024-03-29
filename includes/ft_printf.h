/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:33:46 by gt-serst          #+#    #+#             */
/*   Updated: 2023/06/07 10:20:31 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

int	ft_printf(const char *format, ...);
<<<<<<< HEAD
int	printchar(char c);
int	printstr(char *s);
int	print_address(unsigned long nbr, char *base);
int	printnbr_base(long nbr, char *base);
=======
int	ft_printchar(char c);
int	ft_printstr(char *s);
int	ft_print_address(long nbr, char *base);
int	ft_printnbr_base(long nbr, char *base);
>>>>>>> 074a4be4e08e56148f71951409a40111cc1ff6f3

#endif
