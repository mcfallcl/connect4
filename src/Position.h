#ifndef __POSITION_H
#define __POSITION_H

class Position {
    public:
        Position(int x, int y) :
            x(x % 7), y(y % 6)
            {}
        ~Position() {}
        const int x;
        const int y;
    private:

};

#endif //__POSITION_H