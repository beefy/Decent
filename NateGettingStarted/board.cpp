#include <iostream>
#include <string>
#include <vector>
#include "board.h"
#include "piece.cpp"
#include "piece.h"

using namespace std;

Board::Board() {
    turn = 'w';
    init_pieces();
    cout << "Board Initialized!" << endl;
}

void Board::init_pieces() {

     for (int i = 0; i < 8; i++ ) {
          pieces.push_back();
     }
    	 
     //rank 1
     pieces[0] = { new Piece('R','W'), new Piece('N','W'), new Piece('B','W'), new Piece('K','W'), new Piece('Q','W'), new Piece('B','W'), new Piece('N','W'), new Piece('R','W') };
     //rank 2
     
     //rank 7

     //rank 8  
}
