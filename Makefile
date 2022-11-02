OBJS_DIR =$(shell find $(PWD) -type d -name "objs") 
OBJS = $(shell find -name "*.o")
EXEC = $(shell find -name "*.out")

RM = rm -f
RMF = rm -rf

COL_r	=	\033[0;31m
COL_g	=	\033[0;32m
COL_y	=	\033[0;33m
COL_b	=	\033[0;34m
COL_def	=	\033[0;m

fclean: 
		@printf "$(COL_y)[+]$(COL_def)"
		@$(RMF) $(OBJS_DIR)
		@$(RM) $(OBJS) $(EXEC)
		@echo "\n$(COL_r)Remove object and executable file !$(COL_def)"

MSG = ""
git: fclean
	@printf "$(COL_g)\n[git add .]\n$(COL_def)"
	@git add .
	@printf "$(COL_g)\n[git comit]\n$(COL_def)"
	@git commit -am "`date +'%d-%m-%Y %H:%M:%S'` | $(MSG)"
	@printf "$(COL_g)\n[git push]\n$(COL_def)"
	@git push