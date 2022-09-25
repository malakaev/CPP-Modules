SRCS		=	main.cpp Span.cpp

OBJS		=	$(SRCS:.cpp=.o)

NAME		=	span

CXX			=	c++

CXXFLAGS	= 	-Wall -Werror -Wextra -std=c++98

RM			=	rm -f

%.o:		%.cpp Span.hpp Makefile
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
