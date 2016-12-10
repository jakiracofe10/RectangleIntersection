#include <iostream>
#include <vector>

using namespace std;

struct point {
    int x;
    int y;
    point(int x1,int y1) : x(x1), y(y1) {}
};

struct rectangle {
    point botLeft;
    point topRight;
    rectangle(point p1, point p2) : botLeft(p1), topRight(p2) {}
};

bool doRectanglesIntersect(rectangle r1, rectangle r2) {
    int r1Width = r1.topRight.x-r1.botLeft.x;
    int r1Height = r1.topRight.y-r1.botLeft.y;
    int r2Width = r2.topRight.x-r2.botLeft.x;
    int r2Height = r2.topRight.y-r2.botLeft.y;
    if (r1.botLeft.x > r2.topRight.x || r1.topRight.x < r2.botLeft.x) {
        return false;
    }
    if (r1.botLeft.y > r2.topRight.y || r1.topRight.y < r2.botLeft.y) {
        return false;
    }
    if (r1.botLeft.x < r2.botLeft.x && r1.topRight.x > r2.topRight.x && r1.botLeft.y < r2.botLeft.y && r1.topRight.y > r2.topRight.y) {
        return false;
    }
    //add logic for both x being less than max x
    //add logic for both y being less than max y
    return true;
}

int main() {
    point p1BL(0,0);
    point p1TR(5,5);
    point p2BL(2,2);
    point p2TR(3,5);
    rectangle r1(p1BL, p1TR);
    rectangle r2(p2BL, p2TR);
    bool result = doRectanglesIntersect(r1, r2);
    cout << result;
}