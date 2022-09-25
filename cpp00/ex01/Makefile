SRCS		= main.cpp PhoneBook.cpp Contact.cpp
OBJS		= $(SRCS:.cpp=.o)
DEPS		= $(SRCS:.cpp=.d)

NAME		= phonebook

CC			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
CPPFLAGS	= -MMD
RM			= rm -f

# %.o: %.cpp	PhoneBook.hpp Contact.hpp
# 			$(CC) $(CFLAGS) -c $< -o $@
all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

-include	$(DEPS)

clean:
			$(RM) $(OBJS) $(DEPS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
