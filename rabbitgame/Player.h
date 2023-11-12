//
//  Player.hpp
//  rabbitgame
//
//  Created by Susana Sun on 1/17/23.
//

#ifndef Player_h
#define Player_h

#include <iostream>
#include <stdio.h>
class Arena;

class Player
{
  public:
      // Constructor
    Player(Arena* ap, int r, int c);

      // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;

      // Mutators
    std::string dropPoisonedCarrot();
    std::string move(int dir);
    void   setDead();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    bool   m_dead;
};

#endif /* Player_hpp */
