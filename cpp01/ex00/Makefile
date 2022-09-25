NAME		=	zombie

SRCS		=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp

OBJS		=	$(SRCS:.cpp=.o)

DEPS		=	$(OBJS:.o=.d)

CC			=	c++

CXXFLAGS	= 	-Wall -Werror -Wextra -std=c++98

CPPFLAGS	=	-MMD

RM			=	rm -f


$(NAME):	$(OBJS)
			$(CC) $(CXXFLAGS) $(OBJS) -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(DEPS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

-include	$(DEPS)