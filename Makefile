CXX = clang++
CFLAGS = -Wall -Wextra -O2
SRCS := src/PlayArea.cpp src/Player.cpp
OBJS := $(patsubst src/%.cpp,bin/%.o,$(SRCS))
.PHONY: run

run: connect4
	bin/connect4

connect4: src/connect_4.cpp $(OBJS)
	$(CXX) $(CFLAGS) -lsfml-graphics -lsfml-window -lsfml-system $^ -o bin/$@

bin/%.o: src/%.cpp
	$(CXX) $(CFLAGS) -lsfml-graphics -lsfml-window -lsfml-system -c $^ -o $@