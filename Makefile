# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:23:25 by aguiri            #+#    #+#              #
#    Updated: 2021/11/02 15:17:11 by aguiri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				?= libftprintf.a

CC					= gcc
CFLAGS				?= -Wall -Wextra -Werror
AR 					?= ar
RM					?= rm -f
MKDIR				?= mkdir -p

SRCS				:= 	ft_printf.c
OBJS 				:= $(SRCS:.c=.o)
SRCS_BONUS			:= 	ft_lstadd_back.c
OBJS_BONUS			:= $(SRCS_BONUS:.c=.o)
HDRS				:= libftprintf.h

# -----------------------------------------------------------------------------

all:				$(NAME)
					
%.o: 				%.c $(HDRS)
					@$(CC) -o $@ -c $< -I $(HDRS) $(CFLAGS)

$(NAME):			$(OBJS)
					@$(AR) rcs $@ $^ 
					@echo "Complete."

bonus:				$(OBJS_BONUS) $(OBJS)
					@$(AR) rcs $(NAME) $^

clean:		
					@$(RM) $(OBJS)
					@$(RM) $(OBJS_BONUS)

fclean:				clean	
					@$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re