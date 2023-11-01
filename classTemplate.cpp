#include<iostream>
using namespace std;
template <class T>
 class vector{
     public:
     T *arr;
      int size;
      vector(int n){
          size=n;
          arr=new T[n];
      }
      T getSum(){
          T sum=0;
          for(int i=0;i<size;i++){
              
              sum+=arr[i];
          }
          return sum;
      }
 };
 int main(){
     vector<int>v1(5);
     cout<<"v1"<<endl;
     v1.arr[0]=1;
     v1.arr[1]=2;
     v1.arr[2]=3;
     v1.arr[3]=4;
     v1.arr[4]=5;
     cout<<v1.getSum();
     cout<<endl;
     // know suppose know we wants to getSum for float data type;
     cout<<"v2"<<endl;
     vector <float>v2(5);
     v2.arr[0]=1.23;
     v2.arr[1]=2.05;
     v2.arr[2]=3.14;
     v2.arr[3]=4.53;
     v2.arr[4]=5.64;
     cout<<v2.getSum();
 }
