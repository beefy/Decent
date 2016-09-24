#ifndef _BOARD_
#define _BOARD_

#include <string>
#include <vector>
#include "piece.h"

using std::vector;

class Board {

	public:
		//Init
		Board();
		// Display board
		void display();

		// Return 2d array
		vector<vector<Piece> > getArray();

	private:
		vector<vector<Piece> > boardArray;

};

#endif