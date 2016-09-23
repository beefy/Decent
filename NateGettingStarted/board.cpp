#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Piece {
    public:
        string type;
        char player;
        int x_pos;
        int y_pos;
        Piece(string type, char player, int x_pos, int y_pos);
};

Piece::Piece(string type, char player, int x_pos, int y_pos) {
    type = type;
    player = player;
    x_pos = x_pos;
    y_pos = y_pos; 
}

class Board {
    public: 
        char turn;
        vector< vector<Piece> > pieces; 
        Board();
    protected:
        vector< vector<Piece> > init_pieces();
};

Board::Board(void) {
    turn = 'w';
    pieces = init_pieces();
    cout << "Board Initialized!" << endl;
}

vector< vector<Piece> > Board::init_pieces() {
     vector< vector<Piece> > out;
     return out; 
}

int main() {
    Board board;
}
