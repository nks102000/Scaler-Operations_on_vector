/*WAP using classes and objects to represent the vector in 3
D space and include the member functions to perform the
following tasks:
Create the vector
Modify the value of a given axis
Multiply by scalar value for a given axis
Multiply by scalar value for all axes
Display the vector in the form P(10, 20, 30)
Divide by scalar value for all axes
Add by scalar value for all axes.*/
#include<iostream>
using namespace std;

class vect{
    float x;
    float y;
    float z;
    public:
        vect(){
            x=y=z=0;
        }
        void creat(float a,float b, float c){
            x=a;
            y=b;
            z=c;
        }
        void modify(float a,char ch){
            if (ch=='x'||ch=='X'){
                x=a;
            }
            else if (ch=='y'||ch=='Y'){
                y=a;
            }
            else if (ch=='z'||ch=='Z'){
                z=a;
            }
        }
        void mul_scalar_to_one(float a,char ch){
            if (ch=='x'||ch=='X'){
                x=x*a;
            }
            else if (ch=='y'||ch=='Y'){
                y=y*a;
            }
            else if (ch=='z'||ch=='Z'){
                z=z*a;
            }
        }
        void mul_scalar_to_all(float a){
            x=x*a;
            y=y*a;
            z=z*a;
        }
        void diaplay_vector(){
            cout<<"P("<<x<<","<<y<<","<<z<<")"<<endl;
        }
        void div_scalar_to_all(float a){
            x=x/a;
            y=y/a;
            z=z/a;
        }
        void add_scalar_to_all(float a){
            x=x/a;
            y=y/a;
            z=z/a;
        }
};
int main(){
    vect v;
    v.creat(10,20,30);
    v.diaplay_vector();
    v.modify(14,'x');
    v.diaplay_vector();
    v.mul_scalar_to_one(10,'x');
    v.diaplay_vector();
    v.mul_scalar_to_all(2);
    v.diaplay_vector();
    v.div_scalar_to_all(10);
    v.diaplay_vector();
    v.add_scalar_to_all(25);
    v.diaplay_vector();
    return 0;
}