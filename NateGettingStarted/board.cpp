#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "board.h"
#include "piece.cpp"
#include "piece.h"

using namespace std;

Board::Board() {
    turn = 'B';
    init_pieces();
    cout << "Board Initialized!" << endl;
}

vector<Piece> make_rank(Piece a, Piece b, Piece c, Piece d, Piece e, Piece f, Piece g, Piece h) {

    vector<Piece> rank;
    
    rank.push_back(a);
    rank.push_back(b);
    rank.push_back(c);
    rank.push_back(d);
    rank.push_back(e);
    rank.push_back(f); 
    rank.push_back(g);
    rank.push_back(h);

    return rank;
}

void Board::init_pieces() {

    Piece none;
    vector<Piece> empty_rank = make_rank(none,none,none,none,none,none,none,none);
    for (int i = 0; i < 8; i++ ) {
         pieces.push_back( empty_rank );
    }
    	 
    //rank 1
    Piece w_R('R','W');
    Piece w_N('N','W');
    Piece w_B('B','W');
    Piece w_K('K','W');
    Piece w_Q('Q','W'); 
    Piece w_p('p','w');
    
    Piece b_R('R','B');
    Piece b_N('N','B');
    Piece b_B('B','B');
    Piece b_K('K','B');
    Piece b_Q('Q','B'); 
    Piece b_p('p','B');

    vector<Piece> rank1 = make_rank(w_R,w_N,w_B,w_K,w_Q,w_B,w_K,w_R); 
    vector<Piece> rank2 = make_rank(w_p,w_p,w_p,w_p,w_p,w_p,w_p,w_p); 
    vector<Piece> rank7 = make_rank(b_p,b_p,b_p,b_p,b_p,b_p,b_p,b_p); 
    vector<Piece> rank8 = make_rank(b_R,b_N,b_B,b_K,b_Q,b_B,b_K,b_R); 
    
    pieces[0] = rank1;
    pieces[1] = rank2;
    pieces[6] = rank7;
    pieces[7] = rank8;
}

void Board::display() {
    for(int i = 0; i < 8; i++) {
        for(int y = 0; y < 8; y++) {
            if(pieces[i][y].is_empty) { 
                cout << " . ";
            } else {
                cout << " ";
                if(toupper(pieces[i][y].player) == 'W') { 
                    cout << (char)toupper(pieces[i][y].type);
                } else {
                    cout << (char)tolower(pieces[i][y].type);
                }
                cout << " "; 
            } 
        }
        cout << endl; 
    } 
}

// TODO: make this
bool Board::game_end() {
    return false;
}

bool Board::is_valid_move(string move) {
    if(move == "a") {
        return true;
    } 

    return false;
}

string Board::prompt_move() {
    string move = "";
    map<char, string> move_str = {
        { 'W', "White Player's turn: " },
        { 'B', "Black Player's turn: " }
    }; 
   
    cout << move_str[turn];
    cin >> move;  
    while(not is_valid_move(move)) {
        cout << "Invalid Move!" << endl;
        cout << move_str[turn]; 
        cin >> move;
    }
    switch_turns(); 
    return move;
}

void Board::switch_turns() {
    if(turn == 'W') {
        turn = 'B';
    } else {
        turn = 'W';
    }
}

void Board::play() {
    while(not game_end()) {
        display();
        string move = prompt_move();
    }
}
