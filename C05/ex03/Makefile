NAME			=		 Coffee

HEADER			=		Bureaucrat.hpp \
						Form.hpp \
						PresidentialPardonForm.hpp \
						RobotomyRequestForm.hpp \
						ShrubberyCreationForm.hpp \
						Intern.hpp

CC				=		@clang++

CFLAGS			=		-Wall -Werror -Wextra

SRCS			=		Bureaucrat.cpp \
						Form.cpp \
						main.cpp \
						PresidentialPardonForm.cpp \
						RobotomyRequestForm.cpp \
						ShrubberyCreationForm.cpp \
						Intern.cpp

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)


$(NAME)		: $(OBJS) $(HEADER)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "\033[34m[$(NAME)] Compiled\033[0m"

%.o: %.cpp $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

clean		:
		@echo "\033[32m[$(NAME)] Clean\033[0m"
		@rm -f $(OBJS)

fclean		:
		@echo "\033[32m[$(NAME)] Clean\033[0m"
		@rm -f $(OBJS)
		@rm -f $(NAME)

re			:		fclean all

.PHONY: all bonus clean fclean re