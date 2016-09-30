#ifndef _PIECE_
#define _PIECE_

using namespace std;

class Piece {
    public:
        char type; // R, N, B, K, Q, p 
        char player; // w, b
        bool is_empty;
        Piece(char type, char player);
        Piece(); // empty square
};

#endif
