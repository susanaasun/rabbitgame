//
//  Game.hpp
//  rabbitgame
//
//  Created by Susana Sun on 1/17/23.
//

#ifndef Game_h
#define Game_h

#include <stdio.h>
#include <string>

class Arena;


class Game
{
  public:
      // Constructor/destructor
    Game(int rows, int cols, int nRabbits);
    ~Game();

      // Mutators
    void play();

  private:
    Arena* m_arena;

    // Helper functions
    std::string takePlayerTurn();
};

#endif /* Game_hpp */
