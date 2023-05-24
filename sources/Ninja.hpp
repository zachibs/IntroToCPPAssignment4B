#pragma once
#include <iostream>
#include "Character.hpp"

using namespace std;

namespace ariel{

    class Ninja : public Character{
        private:
            int speed;
        
        public:
            Ninja(string, Point, int, int);
            void move(Character *);
            void slash(Character *);
            string print() override;
    };
}