#include<iostream>

class Position{

    public:
        int x;
        int y;

        Position operator + (Position p){

            Position new_p;
            new_p.x = x + p.x;
            new_p.y = y + p.y;
            return new_p;
        }

        bool operator == (Position p){

            if(x == p.x && y == p.y){
                return true;
            }
            return false;
        }
};
int main(){

    Position p1,p2,p3;

    p1.x=11;p1.y=21;
    p2.x=34;p2.y=44;

    p3 = p1 + p2;

    std::cout << p3.x << " " << p3.y << std::endl;

    if(p1 == p2){

        std::cout << "Same\n";
    }
    else{

        std::cout << "Different\n";
    }
    
    return 0;
}