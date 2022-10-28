#include<bits\stdc++.h>
#include "complex.cpp"
using namespace std;
int main(){
    int real1,real2,imaginary1,imaginary2;
    cin>> real1 >> imaginary1;
    cin>> real2 >> imaginary2;
  complex c1(real1,imaginary1);
    complex c2(real2,imaginary2);
    c1.add(c2);
    c1.print();
    c2.print();
    return 0;





}