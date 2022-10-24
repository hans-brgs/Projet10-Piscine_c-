OBJS = $(shell find -name "*.o")
EXEC = $(shell find -name "*.out")

COL_r	=	\033[0;31m
COL_g	=	\033[0;32m
COL_y	=	\033[0;33m
COL_b	=	\033[0;34m
COL_def	=	\033[0;m

fclean: 
		@printf "$(COL_y)[+]$(COL_def)"
		@$(RM) $(OBJS) $(EXEC)
		@echo "\n$(COL_r)Remove object and executable file !$(COL_def)"

MSG = ""
git: fclean
	@git add .
	@git commit -am "`date + '%m-%d-%Y %H:%M:%S'` | $(MSG)"
	@git push