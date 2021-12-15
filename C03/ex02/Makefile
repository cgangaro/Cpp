NAME			=		Repetitive_work

HEADER			=		ClapTrap.hpp

CC				=		@clang++

CFLAGS			=		-Wall -Wextra -Werror

SRCS			=		ClapTrap.cpp \
						ScavTrap.cpp \
						FragTrap.cpp \
						main.cpp

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)


$(NAME)		: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -I $(HEADER) -o $(NAME)
		@echo "\033[34m[Repetitive_work] Compiled\033[0m"

%.o: %.cpp $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean		:
		@echo "\033[32m[Repetitive_work] Clean\033[0m"
		@rm -f $(OBJS)

fclean		:
		@echo "\033[32m[Repetitive_work] Clean\033[0m"
		@rm -f $(OBJS)
		@rm -f $(NAME)

re			:		fclean all

.PHONY: all clean fclean re