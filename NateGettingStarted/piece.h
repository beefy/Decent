#ifndef _PIECE_
#define _PIECE_


#include <string>

using std::string;

class Piece {
    public:
        string type;
        char player;
        int x_pos;
        int y_pos;
        Piece(string type, char player, int x_pos, int y_pos);
};

#endif
