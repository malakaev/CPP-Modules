/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgolda <kgolda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:09:15 by kgolda            #+#    #+#             */
/*   Updated: 2022/05/05 15:53:09 by kgolda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( int argc, char **argv ) {
	int		i = 1;
	int		j;
	char	c;

	if (argc > 1) {
		while (argv[i] != NULL) {
			j = 0;
			while (argv[i][j] != 0) {
				c = toupper(argv[i][j]);
				std::cout << c;
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
