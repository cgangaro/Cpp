
   
NAME			=		megaphone

CC				=		@clang++

CFLAGS			=		-Wall -Wextra -Werror

SRCS			=		megaphone.cpp

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)


$(NAME)		: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "\033[33m[Megaphone] \033[34mCompiled\033[0m"

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean		:
		@echo "\033[33m[Megaphone] \033[32mClean\033[0m"
		@rm -f $(OBJS)

fclean		:	clean
		@rm -f $(NAME)

re			:		fclean all

.PHONY: all clean fclean re