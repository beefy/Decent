#include <iostream>
#include "board.cpp"
#include <string>

void loop(Board b);

int main() {

    print("Beginner chess engine");

    Board b = Board();
    loop(b);
}

void loop(Board b) {
	// Display board before each turn
	b.display();

	// Input move
	std::string move;
	print("Input your move");
	std::cin >> move;
	print(move);
}