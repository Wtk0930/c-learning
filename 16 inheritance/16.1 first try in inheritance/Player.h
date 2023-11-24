#ifndef Player_H
#define Player_H

#include "Person.h"


class Player: public Person{
    friend std::ostream& operator<<(std::ostream& out, const Player& player);

    public:
        Player() = default;
        Player(const std::string& game_param, const std::string& firstName, const std::string& lastName);
        ~Player();


    private:
        std::string m_game{"None"};
};

#endif
