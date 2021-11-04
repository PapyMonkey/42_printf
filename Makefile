# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:23:25 by aguiri            #+#    #+#              #
#    Updated: 2021/11/04 01:09:11 by aguiri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				?= libftprintf.a

CC					= gcc
CFLAGS				?= -Wall -Wextra -Werror
AR 					?= ar
RM					?= rm -f
MKDIR				?= mkdir -p

# ********************************* P A T H S *********************************

SRCS_PATH			:= src
OBJS_PATH			:= bin
HDRS_PATH			:= include
LIBS_PATH			:= libft

# ********************************* N A M E S *********************************

SRCS_NAME			:= 	ft_args_count.c\
						ft_print_arg.c\
						ft_printf.c\
						main_test.c
SRCS				:= $(addprefix $(SRCS_PATH)/, $(SRCS_NAME))
OBJS 				:= $(addprefix $(OBJS_PATH)/, $(SRCS_NAME:.c=.o))

SRCS_BONUS_NAME		:= 	ft_lstadd_back.c
SRCS_BONUS			:= $(addprefix $(SRCS_PATH)/, $(SRCS_BONUS_NAME))
OBJS_BONUS			:= $(addprefix $(OBJS_PATH)/, $(SRCS_BONUS_NAME:.c=.o))

LIBS_NAME			:=  libft.a

# ********************************* R U L E S *********************************

all:				$(NAME)
					
$(OBJS_PATH)/%.o: 	$(SRCS_PATH)/%.c $(HDRS_PATH)
					@$(MKDIR) $(dir $@)
					@$(CC) -o $@ -c $< -I $(HDRS_PATH) $(CFLAGS)

$(NAME):			$(OBJS)
					@$(MAKE) -C ./$(LIBS_PATH)
					@cp ./$(LIBS_PATH)/$(LIBS_NAME) $@
					@$(AR) rcs $@ $^ 

bonus:				$(OBJS_BONUS) $(OBJS)
					@$(AR) rcs $(NAME) $^

clean:		
					@$(RM) $(OBJS)
					@$(RM) $(OBJS_BONUS)

fclean:				clean	
					@$(RM) -r $(OBJS_PATH)
					@$(RM) $(NAME)

re:					fclean all

test:				all
					$(CC) $(OBJS) ./libft/bin/*/*.o -o main_test.out $(CFLAGS)

.PHONY:				all bonus clean fclean re test