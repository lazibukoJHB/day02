/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lazibuko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:37:25 by lazibuko          #+#    #+#             */
/*   Updated: 2020/07/10 11:42:04 by lazibuko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
void ft_print_reverse_alphabet(void);

{
 int i;
 char *str;

 i =0;
 str =("alphabet='z';alphabet=>'a';alphabet--");
 while(str[i]!='\0')
 {
	 write("\n",alphabet);
 }
 return(0);
}
