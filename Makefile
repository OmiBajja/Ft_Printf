
NAME = libftprintf.a

SRCDIR = src
OBJDIR = obj
INCDIR = include

SRC = ft_printf.c \
      ft_putchar_pf.c \
      ft_putstr_pf.c \
      ft_printadress.c \
      ft_putnbr_pf.c \
      ft_putnbr_upf.c \
      ft_putnbrhexalow.c \
      ft_putnbrhexaupp.c

OBJ = $(SRC:.c=.o)
SRC := $(addprefix $(SRCDIR)/, $(SRC))
OBJ := $(patsubst $(SRCDIR)/%, $(OBJDIR)/%, $(OBJ))

LIBFT_DIR := Libft
LIBFT := $(LIBFT_DIR)/libft.a
LIBFT_INCLUDE := $(LIBFT_DIR)
LDFLAGS =  -L$(LIBFT_DIR)
LIBS =  $(LIBFT)

AR = ar
ARFLAGS = rcs

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCDIR) -g3 -I$(LIBFT_INCLUDE)

VERBOSE ?= 0
ifeq ($(VERBOSE),1)
  V := 
else
  V := @
endif

all: $(OBJDIR) $(LIBFT) $(NAME)

$(OBJDIR):
	$(V)mkdir -p $(OBJDIR) || true

DEP = $(OBJ:.o=.d)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@mkdir -p $(dir $@)
	$(V)$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(DEP)

# Linking Rule
$(NAME): $(LIBFT)  $(OBJ)
	@cp $(LIBFT) $(NAME)
	$(V)$(AR) $(ARFLAGS) $(NAME) $(OBJ)

# Libft
$(LIBFT):
	$(V)$(MAKE) --silent -C $(LIBFT_DIR)

# Clean Rules
clean:
	$(V)rm -rf $(OBJDIR)

fclean: clean
	$(V)rm -f $(NAME)
	$(V)$(MAKE) --silent -C $(LIBFT_DIR) fclean

re: fclean all

# Makefile Reconfiguration 
regen:
	makemyfile

.PHONY: all clean fclean re bonus regen
.DEFAULT_GOAL := all
