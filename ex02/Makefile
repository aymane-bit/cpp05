CXX = c++

CXXFLAGS = -Wall -Wextra -Werror 

TARGET = Form

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re