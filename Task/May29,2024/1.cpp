#include<iostream>
using namespace std;
class shape{
    public:
    virtual void calculate_Area() = 0;
};
class rectangle:public shape{
    private:
    double length;
    double width;
    double area;
    public:
    void set_rectangle(double a, double b){
        length = a;
        width = b;
    }
    void calculate_Area() override{
       area = length*width;
    }
    void get_rec_Area(){
        cout << "The Area of the rectangle is : " << area <<endl;
    }
};
class circle:public shape{
    private:
    double length;
    double width;
    double area;
    public:
    void set_circle(double a, double b){
        length = a;
        width = b;
    }
    void calculate_Area() override{
       area = 3.14*length*width;
    }
    void get_cir_Area(){
        cout << "The Area of the circle is : " << area << endl;
    }
};
int main(){
    rectangle r;
    r.set_rectangle(4.3, 2.231);
    r.calculate_Area();
    r.get_rec_Area();
    circle c;
    c.set_circle(6.1, 1.2);
    c.calculate_Area();
    c.get_cir_Area();
}