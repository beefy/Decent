#ifndef _BOARD_
#define _BOARD_

#include <string>
#include <vector>

using std::vector;

class Board {

	public:
		//Init
		Board();
		// Display board
		void display();

		// Return 2d array
		vector<vector<std::string> > getArray();

	private:
		vector<vector<std::string> > boardArray;

};

#endif