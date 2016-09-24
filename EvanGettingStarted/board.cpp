#include "board.h"
#include "piece.cpp"

Board::Board() {

	// Initialize board for no side and no piece
	for (int i = 0; i < 8; ++i)
	{
		vector<Piece> temp;
		for (int j = 0; j < 8; ++j)
		{
			Piece p = Piece(EMPTY_SIDE, EMPTY_PIECE);
			temp.push_back(p);
		}
		boardArray.push_back(temp);
	}

	// Set pieces
	// TODO: make this pretty
	boardArray[0][0].setTypeAndSide(ROOK_PIECE, BLACK_SIDE);
	boardArray[0][7].setTypeAndSide(ROOK_PIECE, BLACK_SIDE);
	boardArray[7][0].setTypeAndSide(ROOK_PIECE, WHITE_SIDE);
	boardArray[7][7].setTypeAndSide(ROOK_PIECE, WHITE_SIDE);

	boardArray[0][1].setTypeAndSide(KNIGHT_PIECE, BLACK_SIDE);
	boardArray[0][6].setTypeAndSide(KNIGHT_PIECE, BLACK_SIDE);
	boardArray[7][1].setTypeAndSide(KNIGHT_PIECE, WHITE_SIDE);
	boardArray[7][6].setTypeAndSide(KNIGHT_PIECE, WHITE_SIDE);

	boardArray[0][2].setTypeAndSide(BISHOP_PIECE, BLACK_SIDE);
	boardArray[0][5].setTypeAndSide(BISHOP_PIECE, BLACK_SIDE);
	boardArray[7][2].setTypeAndSide(BISHOP_PIECE, WHITE_SIDE);
	boardArray[7][5].setTypeAndSide(BISHOP_PIECE, WHITE_SIDE);

	boardArray[0][3].setTypeAndSide(QUEEN_PIECE, BLACK_SIDE);
	boardArray[7][3].setTypeAndSide(QUEEN_PIECE, WHITE_SIDE);

	boardArray[0][4].setTypeAndSide(KING_PIECE, BLACK_SIDE);
	boardArray[7][4].setTypeAndSide(KING_PIECE, WHITE_SIDE);

	for (int i = 0; i < 8; ++i)
	{
		boardArray[1][i].setTypeAndSide(PAWN_PIECE, BLACK_SIDE);
		boardArray[6][i].setTypeAndSide(PAWN_PIECE, WHITE_SIDE);
	}
}

void Board::display() {
	vector<vector<Piece> > b = boardArray;

	print("");

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (j == 0) {
				// left side barrier
				std::cout << " | ";
			}

			// print piece type
			std::cout << b[i][j].getType() << " | ";

			if (j == 7 && i != 7) {
				print("\n _________________________________");
			}
		}
	}

	print("\n");
}

vector<vector<Piece> > Board::getArray() {
	return boardArray;
}