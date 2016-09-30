
#include <string>
#include "piece.h"

Piece::Piece(char in_type, char in_player) {
    type = in_type;
    player = in_player;
    is_empty = false;
}

Piece::Piece() {
    is_empty = true;
}
