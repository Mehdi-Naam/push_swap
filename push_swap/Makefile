NAME = push_swap

CC = cc -g -fsanitize=address
RM = @rm -rf
FLAGS = -Wall -Wextra -Werror 

FILE_MN = 	ft_all_lst.c ft_split.c push_swap.c utile.c parsing.c \
			ft_instraction_a.c ft_instraction_b.c ft_instraction.c \
			ft_sorting.c ft_indix.c ft_push_to_b.c ft_push_to_a.c

PATH_SRC = ./src/
PATH_MAN = $(PATH_OBJ_MND)

FILE_SRC = $(addprefix $(PATH_SRC), $(FILE_MN))

PATH_OBJ_MND = ./objects_f/
OBJCT_FIL_SRC = $(FILE_MN:.c=.o)
FILE_OBJ_MND = $(addprefix $(PATH_OBJ_MND), $(OBJCT_FIL_SRC))

all : $(NAME)

$(NAME) : $(FILE_OBJ_MND) push_swap.h
		$(CC) $(FLAGS) $(FILE_OBJ_MND) -o $(NAME)

$(PATH_OBJ_MND)%.o : $(PATH_SRC)%.c push_swap.h
		@mkdir -p $(PATH_OBJ_MND)
		@mkdir -p $(PATH_MAN)
		$(CC) $(FLAGS) -c $< -o $@

clean :
		$(RM) $(PATH_OBJ_MND)

fclean : clean
		$(RM) $(NAME) 
re : fclean all
