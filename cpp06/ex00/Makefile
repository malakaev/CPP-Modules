
NAME		=		convert

CC			=		c++

FLAGS		=		-Wall -Wextra -Werror -std=c++98
# FLAGS		=		-Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SRC_LIST	=		main.cpp Convert.cpp


SRC_DIR		=		src/

# OBJ			=		$(patsubst %.cpp,%.o,$(SRC_LIST))
OBJ			=		$(SRC_LIST:.cpp=.o)


OBJS_DIR	=		objects_deps/

OBJS		=		$(addprefix $(OBJS_DIR), $(OBJ))

# DEP			=		$(patsubst %.o,%.d,$(OBJ))
DEP			=		$(OBJ:.o=.d)

DEPS		=		$(addprefix $(OBJS_DIR), $(DEP))



all				:	$(NAME)

$(NAME)			:	$(OBJS_DIR) $(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)		:
				mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o	:	$(SRC_DIR)%.cpp Makefile
				$(CC) $(FLAGS) -MMD -c $< -o $@

clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

-include	$(DEPS)
