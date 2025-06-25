/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshcherb <pshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:22:10 by pshcherb          #+#    #+#             */
/*   Updated: 2025/06/25 21:15:28 by pshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv) 
{
    int     i;
    int     j;

    i = 1;
    (void)argv;
    if (argc == 1)
    {
        printf("* LOUD AND UNBEARABLE FEEDBACK NOISE *\n");
        return (0);
    }
    else
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                printf("%c", toupper(argv[i][j]));
                j++;
            }
            i++;
        }
        printf("\n");
    }
}