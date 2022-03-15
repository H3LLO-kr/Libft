/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:59:34 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/14 22:59:37 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (i + 1 > size)
		return (j + size);
	k = 0;
	while (i + k < size - 1 && src[k])
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = 0;
	return (i + j);
}