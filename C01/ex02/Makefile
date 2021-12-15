NAME			=		HI_THIS_IS_BRAIN

CC				=		@clang++

CFLAGS			=		-Wall -Wextra -Werror

SRCS			=		main.cpp

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)


$(NAME)		: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "\033[34m[HI_THIS_IS_BRAIN] Compiled\033[0m"

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean		:
		@echo "\033[32m[HI_THIS_IS_BRAIN] Clean\033[0m"
		@rm -f $(OBJS)

fclean		:
		@echo "\033[32m[HI_THIS_IS_BRAIN] Clean\033[0m"
		@rm -f $(OBJS)
		@rm -f $(NAME)

re			:		fclean all

.PHONY: all clean fclean re