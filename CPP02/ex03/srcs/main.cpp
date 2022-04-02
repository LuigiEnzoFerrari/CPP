#include "Point.hpp"

#define SQUARE_MAP_SIZE 10
#define OFFSET_X 10


bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    Point p1(4, 0);
    Point p2(0, 10);
    Point p3(9, 10);
    Point p4(9, 10);
    for (int i = 0; i <= SQUARE_MAP_SIZE; i++) {
        std::cout << i;
        for (int space = 0; space < SQUARE_MAP_SIZE; space++) {
            std::cout << " ";
        }
        for (int j = 0; j <= SQUARE_MAP_SIZE; j++) {
            if (bsp(p1, p2, p3, Point(j, i))) {
                if (p4.getX().toInt() == j
                    && p4.getY().toInt() == i)
                    std::cout << " # ";
                else
                    std::cout << " * ";
            }
            else
                std::cout << "   ";
        }
        std::cout << std::endl;
    }
    return 0;
}