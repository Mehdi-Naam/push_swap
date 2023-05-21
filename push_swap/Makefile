NAME = push_swap
NAME_BUS = checker

CC = cc
RM = @rm -rf
FLAGS = -Wall -Wextra -Werror 

FILE_MN = 	ft_all_lst.c ft_split.c push_swap.c utile.c parsing.c \
			ft_instraction_a.c ft_instraction_b.c ft_instraction.c \
			ft_sorting.c ft_indix.c ft_push_to_b.c ft_push_to_a.c

PATH_SRC = ./src/
PATH_MAN = $(PATH_OBJ_MND)

FILE_SRC = $(addprefix $(PATH_SRC), $(FILE_MN))

PATH_OBJ_MND = ./objects_mendatory_f/
OBJCT_FIL_SRC = $(FILE_MN:.c=.o)
FILE_OBJ_MND = $(addprefix $(PATH_OBJ_MND), $(OBJCT_FIL_SRC))


all : $(NAME)

$(NAME) : $(FILE_OBJ_MND) src/push_swap.h
		$(CC) $(FLAGS) $(FILE_OBJ_MND) -o $(NAME)

$(PATH_OBJ_MND)%.o : $(PATH_SRC)%.c src/push_swap.h
		@mkdir -p $(PATH_OBJ_MND)
		@mkdir -p $(PATH_MAN)
		$(CC) $(FLAGS) -c $< -o $@

#bonus part

FILE_BS = 	ft_all_lst.c ft_split.c utile.c parsing.c checker.c \
			ft_instraction_a.c ft_instraction_b.c gnl/get_next_line.c \
			gnl/get_next_line_utils.c ft_instraction.c 

PATH_BUS = ./bonus/
PATH_BS = $(PATH_OBJ_BUS)

PATH_GNL = $(PATH_BS)/gnl/

FILE_BUS = $(addprefix $(PATH_BUS), $(FILE_BS))

PATH_OBJ_BUS = ./objects_bonus_f/
OBJCT_FIL_BUS = $(FILE_BS:.c=.o)
FILE_OBJ_BUS = $(addprefix $(PATH_OBJ_BUS), $(OBJCT_FIL_BUS))

bonus : $(NAME_BUS)

$(NAME_BUS) : $(FILE_OBJ_BUS) bonus/checker_bonus.h
		$(CC) $(FLAGS) $(FILE_OBJ_BUS) -o $(NAME_BUS)

$(PATH_OBJ_BUS)%.o : $(PATH_BUS)%.c bonus/checker_bonus.h
		@mkdir -p $(PATH_OBJ_BUS)
		@mkdir -p $(PATH_BS)
		@mkdir -p $(PATH_GNL)
		$(CC) $(FLAGS) -c $< -o $@

clean :
		$(RM) $(PATH_OBJ_MND) $(PATH_OBJ_BUS)

fclean : clean
		$(RM) $(NAME) $(NAME_BUS)

re : fclean all

bre : fclean bonus
