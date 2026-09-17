#include <iostream>
#include <cmath>

using namespace std;

 class point {
    private:
    int x;
    int y;

    public:

    point(){
        int x = 0;
        int y = 0;
    }

    point(int x1, int y1){
         x = x1;
         y = y1;
    }

    int get_x(){
        return x;
    }
    int get_y(){
        return y;
    }


 };
int main(){
    point p1 = point(3,4);

    cout << p1.get_x();
    cout << p1.get_y();

    return 0;
}
