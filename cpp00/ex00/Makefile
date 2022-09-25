NAME		= megaphone

SRCS		= megaphone.cpp

OBJS		= $(SRCS:.cpp=.o)

CC			= c++

RM			= rm -f

FLAGS		= -Wall -Wextra -Werror -std=c++98
# FLAGS		= -Wall -Wextra -Werror

%.o:		%.cpp
			$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY :	all clean fclean re