#include "piece.h"
#include "utils.cpp"

Piece::Piece() {
	this->side = -1;
	this->type = EMPTY_SIDE;
}

Piece::Piece(int side, std::string type) {
	this->side = side;
	this->type = type;
}

int Piece::getSide() {
	return this->side;
}

std::string Piece::getType() {
	return this->type;
}

void Piece::setType(std::string type) {
	this->type = type;
}

void Piece::setTypeAndSide(std::string type, int side) {
	this->type = type;
	this->side = side;
}