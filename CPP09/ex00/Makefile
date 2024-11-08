# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagea <lagea@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 17:00:33 by lagea             #+#    #+#              #
#    Updated: 2024/11/08 19:11:49 by lagea            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= btc

SRC_DIR 	= src
INC_DIR		= include
OBJ_DIR 	= build

SRC 		= 	$(SRC_DIR)/main.cpp \
				
OBJ			= $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS 		= $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.d)
CXX			= c++
RM 			= rm -f
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g
INCS 		= -I$(INC_DIR) -I.
	
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $(INCS) -MMD -MP -c $< -o $@

-include $(DEPS)
	
clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) -r $(OBJ_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re