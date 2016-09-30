#ifndef _BOARD_
#define _BOARD_


#include <string>
#include <vector>
#include "piece.h"

using std::vector;

class Board {
    public:
        char turn;
        vector< vector<Piece> > pieces;
        Board();
    protected:
        vector< vector<Piece> > init_pieces();
};

#endif
