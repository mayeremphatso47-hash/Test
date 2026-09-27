#include <iostream>
#include <deque>
using namespace std;
class cPlayer
{
public:
    int x, y;
    cPlayer(int width) {x = width / 2; y = 0;}
};
class cLane
{
private:
    deque<bool> cars;
public:
    cLane(int width)
    {
        for (int i = 0; i < width; i++)
             cars.push_front(false);
    }
    void move()
    {
        if(rand() % 10 == 1)
           cars.push_front(true);
        else
              cars.push_front(false);
        cars.pop_back();
    }
    bool CheckPos(int pos) {return cars[pos]; }
};
class cGame 
{
private:
    bool quit = false;
public:
    void Draw()
    {

    }
    void Input()
    {

    }
    void Logic()
    {

    }
    void Run()
    {
        while (!quit)
        {
            Input();
            Draw();
            Logic();
        }
    }
};
int main()
{
    cLane lane1(20);
    for(int i = 0; i < 20; i++)
    {
        if(lane1.CheckPos(i))
            cout << "1";
        else
            cout << "0";
    }
    lane1.move();
    lane1.move();
    lane1.move();
    lane1.move();
    cout << endl;
    for(int i = 0; i < 20; i++)
    {
        if(lane1.CheckPos(i))
            cout << "1";
        else
            cout << "0";
    }
    getchar();
    return 0;
}