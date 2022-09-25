SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)

DEPS		=	$(OBJS:.o=.d)

NAME		=	convert

CXX			=	c++

CXXFLAGS	= 	-Wall -Werror -Wextra -std=c++98

RM			=	rm -f

%.o:		%.cpp Makefile
			$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(DEPS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
