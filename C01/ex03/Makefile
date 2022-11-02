# PROGRAMME NAME
CURRENT_DIR =	$(shell basename "$(PWD)")
NAME		=	$(addprefix $(CURRENT_DIR), .out)

# PATH
INC_DIR		= 	includes/
SRC_DIR		=	srcs/
OBJ_DIR		= 	objs/

# FILES
SRCS		=	Weapon.cpp			\
				HumanA.cpp			\
				HumanB.cpp			\
				main.cpp	
DEPS		=   Weapon.hpp			\
				HumanA.hpp			\
				HumanB.hpp					
OBJS 		= 	$(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

# SEARCH PATH TO FIND FILES
VPATH 		= $(INC_DIR) $(OBJ_DIR) $(SRC_DIR)

# COMPILATOR AND FLAGS
CC			= 	c++
CPPFLAGS 	= 	-std=c++98 -I$(INC_DIR) -g 
CPPFLAGS	+= 	-Wall -Wextra -Werror 

# RM COMMAND
RM			= 	rm -f
RMF			= 	rm -rf

# SOME COLOR
COL_r	=	\033[0;31m
COL_g	=	\033[0;32m
COL_y	=	\033[0;33m
COL_b	=	\033[0;34m
COL_def	=	\033[0;m

# LEAK LOG FILE
LOG_FILE	= valgrind-out.txt

#-----------------------------------------#
#				MANDATORY				  #
#-----------------------------------------#

all:		$(NAME)

${OBJ_DIR}%.o : %.cpp
			@mkdir -p $(OBJ_DIR)
			@printf "$(COL_y)[+]$(COL_def)"
			@$(CC) $(CPPFLAGS) -c $< -o $@

$(OBJ_DIR) :
			@mkdir -p $(OBJ_DIR)

$(NAME):	$(OBJS_DIR) $(OBJS) $(DEPS)
			@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
			@echo "\n$(COL_g)Done !$(COL_def)"
			@echo "Program $(COL_b)'$(NAME)'$(COL_def) is ready to use !"

clean:
			@$(RMF) $(OBJ_DIR) $(LOG_FILE)
			@$(RM) $(OBJ_DIR)
			@echo "$(COL_r)Remove object file !$(COL_def)"


fclean:		clean
			@$(RM) $(NAME)
			@echo "$(COL_r)Remove program '$(NAME)'!$(COL_def)"


re:			fclean all

#-----------------------------------------#
#				MY TOOLS				  #
#-----------------------------------------#

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
	@printf $(SRCS);

.PHONY:		all clean fclean re