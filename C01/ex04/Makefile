NAME		=	sed.out

SRCS		=	main.cpp				\

OBJS		= 	$(SRCS:%.cpp=%.o)

INC			= 	includes
CC			= 	c++
CPPFLAGS 	= 	-std=c++98 -I$(INC) -g
CPPFLAGS	+= 	-Wall -Wextra -Werror 

RM			= 	rm -f
RMF			= 	rm -rf

COL_r	=	\033[0;31m
COL_g	=	\033[0;32m
COL_y	=	\033[0;33m
COL_b	=	\033[0;34m
COL_def	=	\033[0;m

LOG_FILE	= valgrind-out.txt

#-----------------------------------------#
#				MANDATORY				  #
#-----------------------------------------#

all:		$(NAME)

.cpp.o:
			@printf "$(COL_y)[+]$(COL_def)"
			@$(CC) $(CPPFLAGS) -c $< -o $(<:.cpp=.o)


$(NAME):	$(OBJS)
			@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
			@echo "\n$(COL_g)Done !$(COL_def)"
			@echo "Program $(COL_b)'$(NAME)'$(COL_def) is ready to use !"


clean:
			@$(RM) $(OBJS) $(LOG_FILE)
			@echo "$(COL_r)Remove object file !$(COL_def)"


fclean:		clean
			@$(RM) $(NAME)
			@echo "$(COL_r)Remove program '$(NAME)'!$(COL_def)"


re:			fclean all

#-----------------------------------------#
#				MY TOOLS				  #
#-----------------------------------------#

MSG = ""
DATE = $(shell `date +"%m-%d-%Y %H:%M:%S")
git: fclean
	@git add .
	@git commit -am "$(DATE) | $(MSG)"
	@git push

# VALGRIND
ARG1 = "a"
ARG2 = "test"
ARG3 = ""
leak:
	@valgrind	--leak-check=full			\
				--show-leak-kinds=all		\
    			--track-origins=yes			\
    			--verbose					\
    			--trace-children=yes		\
    			--log-file=$(LOG_FILE) \
    			./$(NAME) $(ARG1) $(ARG2) $(ARG3)\

print:
	@printf $(INC);

.PHONY:		all clean fclean re