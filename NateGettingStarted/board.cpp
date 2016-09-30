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

vector<Piece> make_rank(Piece a, Piece b) {

     vector<Piece> rank;

     rank.push_back(a);
     rank.push_back(b);
 
     return rank;
}

void Board::init_pieces() {

     for (int i = 0; i < 8; i++ ) {
          pieces.push_back( { } );
     }
    	 
     //rank 1
     Piece rook('R','W');
     vector<Piece> rank1 = make_rank(rook, rook);
     //rank1  = make_rank( new Piece('R','W'), new Piece('N','W'), new Piece('B','W'), new Piece('K','W'), new Piece('Q','W'), new Piece('B','W'), new Piece('N','W'), new Piece('R','W') );
     //rank 2
     
     //rank 7

     //rank 8  
     pieces[0] = rank1;
}

