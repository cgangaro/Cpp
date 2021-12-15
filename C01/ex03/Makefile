NAME			=		Unnecessary_violence

HEADER			=		Weapon.hpp

CC				=		@clang++

CFLAGS			=		-Wall -Wextra -Werror

SRCS			=		Weapon.cpp \
						HumanA.cpp \
						HumanB.cpp \
						main.cpp

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)


$(NAME)		: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -I $(HEADER) -o $(NAME)
		@echo "\033[34m[Unnecessary_violence] Compiled\033[0m"

%.o: %.cpp $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean		:
		@echo "\033[32m[Unnecessary_violence] Clean\033[0m"
		@rm -f $(OBJS)

fclean		:
		@echo "\033[32m[Unnecessary_violence] Clean\033[0m"
		@rm -f $(OBJS)
		@rm -f $(NAME)

re			:		fclean all

.PHONY: all clean fclean re