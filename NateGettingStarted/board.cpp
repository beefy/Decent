#include <iostream>
#include <string>
#include <vector>
#include "board.h"

using namespace std;

Board::Board() {
    turn = 'w';
    pieces = init_pieces();
    cout << "Board Initialized!" << endl;
}

vector< vector<Piece> > Board::init_pieces() {
     vector< vector<Piece> > out;
     return out; 
}
