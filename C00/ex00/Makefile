NAME		= megaphone.out

SRCS		= megaphone.cpp	\

OBJ_DIR		= objs
OBJ_FILES	= $(SRCS:.cpp=.o)
OBJS		= $(addprefix $(OBJ_DIR)/,$(OBJ_FILES))

GCC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -f
RMF			= rm -rf

LOG_FILE	= valgrind-out.txt

#-----------------------------------------#
#				MANDATORY				  #
#-----------------------------------------#

all:		$(NAME)

$(OBJ_DIR)/%.o: %.cpp
			@mkdir -p $(OBJ_DIR)
			@$(GCC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) 
			@$(GCC) $(CFLAGS) $< -o $@ 
			@printf "Done!\n";

clean:
			@$(RM) $(OBJS) $(LOG_FILE)
			@$(RMF) $(OBJ_DIR)

fclean:		clean
			@$(RM) $(NAME) $(LOG_FILE)

re:			fclean all

#-----------------------------------------#
#				MY TOOLS				  #
#-----------------------------------------#

MSG = ""
git: fclean
	@git add .
	@git commit -am "`date + '%m-%d-%Y %H:%M:%S'` | $(MSG)"
	@git push

# VALGRIND
ARG1 = test1
ARG2 = test2
ARG3 = test3
ARG4 = test4
ARG5 = test5
leak:
	@valgrind	--leak-check=full			\
				--show-leak-kinds=all		\
    			--track-origins=yes			\
    			--verbose					\
    			--trace-children=yes		\
    			--log-file=$(LOG_FILE) \
    			./$(NAME) $(ARG1) $(ARG2) $(ARG3) $(ARG4) $(ARG5)\

.PHONY:		all clean fclean re