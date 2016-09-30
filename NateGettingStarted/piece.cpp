
#include <string>
#include "piece.h"

Piece::Piece(char type, char player) {
    type = type;
    player = player;
    is_empty = false;
}

Piece::Piece() {
    is_empty = true;
}
