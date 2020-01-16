/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:32:47 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/16 19:50:31 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(' ' <= *str && *str <= '~'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
