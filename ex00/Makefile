CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = Bureaucrat

SRC = main.cpp Bureaucrat.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re