NAME			=		Sed_is_for_losers

HEADER			=		.

CC				=		@clang++

CFLAGS			=		-Wall -Wextra -Werror

SRCS			=		main.cpp

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)


$(NAME)		: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -I $(HEADER) -o $(NAME)
		@echo "\033[34m[Sed_is_for_losers] Compiled\033[0m"

%.o: %.cpp $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean		:
		@echo "\033[32m[Sed_is_for_losers] Clean\033[0m"
		@rm -f $(OBJS)

fclean		:
		@echo "\033[32m[Sed_is_for_losers] Clean\033[0m"
		@rm -f $(OBJS)
		@rm -f $(NAME)

re			:		fclean all

.PHONY: all clean fclean re