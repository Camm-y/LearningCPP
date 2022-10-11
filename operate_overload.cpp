#include <iostream>

using std::cout, std::string;

class Position
{
    public:
        int x = 10;
        int y = 20; 
        Position operator + (Position pos)
        {
            Position new_pos;
            new_pos.x = x + pos.x;
            new_pos.y = y + pos.y;
            return new_pos;
        }
        bool operator == (Position pos)
        {
            return (x == pos.x && y == pos.y);
        }
};

std::ostream& operator << (std::ostream& output, Position pos)
{
    output << "X: " << pos.x << ", Y: " << pos.y << std::endl;
    return output;
}

std::istream& operator >> (std::istream& input, Position &pos)
{
    input >> pos.x >> pos.y;
    return input; 
}


int main()
{
    Position pos1, pos2;
    Position pos3 = pos1 + pos2;
    cout << pos3.x << "\t" << pos3.y << std::endl;

    cout << pos1;
    cout << "Test: ";
    std::cin >> pos3;
    cout << pos3;
}