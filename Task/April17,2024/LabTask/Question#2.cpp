#include <iostream>
using namespace std;
class car{
    public:
    string name;
    char direction;
    int distance;
    car(string n, char dir, int dis){
        name = name;
        direction = dir;
        distance= dis;
    }
    char turn(){
        if(direction == 'N'){
            return 'E';
        }
        else if(direction == 'E'){
             return 'S';
        }else if(direction == 'S'){
           return 'W';
        }
        else{
            return 'N';
        }
    }
    char turn(char n){
        direction = n;
    }
    int move (int d){
        distance = d;
    }
};
int main(){
    char dir;
    car c1("MarkX", 'N', 100);
    char res=c1.turn();
    cout<<"Changed direction: "<<res;
    cout<<"Enter direction to change: ";
    cin>>dir;
    c1.turn(dir);
return 0;
}