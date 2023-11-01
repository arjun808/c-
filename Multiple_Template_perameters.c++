#include<iostream>
using namespace std;
template <class T1,class T2>
class Arjun{
    public:
    T1 data1;
    T2 data2;
    Arjun(T1 x,T2 y){
        data1=x;
        data2=y;
    }
    void print(){
        cout<<this->data1<<"  "<<this->data2;
    }
};
int main(){
    Arjun<float,int>o1(9.233,5);
    o1.print();
    
}
