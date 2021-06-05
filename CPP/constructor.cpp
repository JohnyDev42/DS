#include<iostream>

using namespace std;

class Point{
    private:
        int a,b;
    public:
        Point(int x=1,int y=1){
            a=x,b=y;
        }
       
        int getA(){
            return a;
        }
        int getB(){
            return b;
        }
};
int main(){
    Point A(5,6);
    Point B(A);
    cout<<A.getA()<<" "<<A.getB()<<endl;
    cout<<B.getA()<<" "<<B.getB()<<endl;
}