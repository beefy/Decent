#ifndef _PIECE_
#define _PIECE_

using std::string;

class Piece {
	
	public:

		Piece();
		Piece(int side, std::string type);

		int getSide();
		std::string getType();
		void setType(std::string type);
		void setTypeAndSide(std::string type, int side);
		
		// 0 white 1 black
		int side;
		std::string type;

};

#endif