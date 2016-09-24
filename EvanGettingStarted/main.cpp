#include <iostream>
#include "board.cpp"
#include <string>

void loop(Board b, bool turn);

int main() {

    print("Beginner chess engine");

    Board board = Board();
    bool turn = 0; // White's goes first, therefore 0
    loop(board, turn);
}

void loop(Board b, bool turn) {
	// Display board before each turn
	b.display();

	string who;

	if (turn == 0) {
		who = "White";
	} else {
		who = "Black";
	}

	// Input move
	std::string move;
	print(who + " to move:");
	std::cin >> move;

	if (move == "Q" or move == "q" or move == "quit") {
		return;
	} else {
		loop(b, !turn);
	}
}