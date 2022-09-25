NAME		=	crazy_animals

SRCS		=	main.cpp \
				Cat.cpp \
				Dog.cpp \
				Animal.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp

OBJS		=	$(SRCS:.cpp=.o)

DEPS		=	$(OBJS:.o=.d)

CC			=	c++

CXXFLAGS	= 	-Wall -Werror -Wextra -std=c++98
# CXXFLAGS	= 	-std=c++98

CPPFLAGS	=	-MMD

RM			=	rm -f


$(NAME):	$(OBJS)
			$(CC) $(CXXFLAGS) $(OBJS) -o $@

all:		$(NAME)

c:	all clean

clean:
			$(RM) $(OBJS) $(DEPS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

-include	$(DEPS)