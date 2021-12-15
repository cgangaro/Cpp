NAME			=		Polymorphism

HEADER			=		Animal.hpp

CC				=		@clang++

CFLAGS			=		-Wall -Wextra -Werror

SRCS			=		Animal.cpp \
						Cat.cpp \
						Dog.cpp \
						WrongAnimal.cpp \
						WrongCat.cpp \
						WrongDog.cpp \
						main.cpp

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)


$(NAME)		: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -I $(HEADER) -o $(NAME)
		@echo "\033[34m[Polymorphism] Compiled\033[0m"

%.o: %.cpp $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean		:
		@echo "\033[32m[Polymorphism] Clean\033[0m"
		@rm -f $(OBJS)

fclean		:
		@echo "\033[32m[Polymorphism] Clean\033[0m"
		@rm -f $(OBJS)
		@rm -f $(NAME)

re			:		fclean all

.PHONY: all clean fclean re