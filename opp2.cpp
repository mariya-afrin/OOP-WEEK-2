#include<iostream>
using namespace std;
class myclass{
    int a;
    public:
        void set_a(int value){
         a=value;
}
   int get_a(){
       return a;
   }};
int main(){
    myclass ob;
    myclass ob2;
    ob.set_a(10);
    cout<<"ob.get_a()"<<endl;

}
