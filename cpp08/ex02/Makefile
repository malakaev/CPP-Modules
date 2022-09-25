SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)

NAME		=	mutant

CXX			=	c++

CXXFLAGS	= 	-Wall -Werror -Wextra -std=c++98

RM			=	rm -f

%.o:		%.cpp MutantStack.hpp Makefile
			$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
