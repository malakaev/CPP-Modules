NAME		=	ft_replace

SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -f

$(NAME):	$(OBJS)
			$(CC) $(CXXFLAGS) $(OBJS) -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
