//
//  History.hpp
//  rabbitgame
//
//  Created by Susana Sun on 1/17/23.
//

#ifndef History_h
#define History_h

#include <stdio.h>
#include "globals.h"

class History
{
      public:
        History(int nRows, int nCols);
        bool record(int r, int c);
        void display() const;
    private:
        int m_nRows;
        int m_nCols;
        char m_grid[MAXROWS][MAXCOLS];

};

/*char num_to_char(int num)
{
    return 'A' + num - 1;
}*/

#endif /* History_hpp */
