//
//  main.cpp
//  rabbitgame
//
//  Created by Susana Sun on 1/17/23.
//

// rabbits.cpp

#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
#include <cctype>
#include "Game.h"
using namespace std;
//
//
//
/////////////////////////////////////////////////////////////////////////////
//// main()
/////////////////////////////////////////////////////////////////////////////
//
int main()
{
      // Create a game
      // Use this instead to create a mini-game:   Game g(3, 5, 2);
    Game g(10, 12, 20);

      // Play the game
    g.play();
}

//test

//#include "Rabbit.h"
//    int main()
//    {}
