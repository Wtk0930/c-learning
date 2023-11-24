#include "Player.h"


Player:: Player(const std::string& game_param, const std::string& firstName, const std::string& lastName){
    this -> m_game = game_param;
    this -> setFirstName(firstName);
    this -> setLastName(lastName);
}

Player::~Player(){}

std::ostream& operator<<(std::ostream& out, const Player& player){
    out << "Player[" << player.getFirstName() << " " << player.getLastName() << player.m_game << "]";
    return out;
}
