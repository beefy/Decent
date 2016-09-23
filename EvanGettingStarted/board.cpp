#include "board.h"
#include "utils.cpp"

Board::Board() {

	for (int i = 0; i < 7; ++i)
	{
		vector<std::string> temp;
		for (int j = 0; j < 7; ++j)
		{
			temp.push_back(EMPTY_PIECE);
		}
		boardArray.push_back(temp);
	}

	boardArray[0][0] = ROOK_PIECE;
}

void Board::display() {
	std::cout << boardArray[0][0] << std::endl;
	std::cout << boardArray[1][0] << std::endl;
}

vector<vector<std::string> > Board::getArray() {
	return boardArray;
}