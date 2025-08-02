//1. Create two classes named Vehicle1 and Vehicle2, each having a private data member
//named price. Add a member function setPrice() in each class to assign a value of price.
//Also, define a friend function max() that has access to both classes. The max() function
//should compare the price values and display the maximum price.
#include <iostream>
using namespace std;
class Vehicle2;
class Vehicle1 
{
    private:
        int price;
    public:
        void setPrice(int p) 
        {
            price = p;
        }
        friend void max(Vehicle1, Vehicle2);
};
class Vehicle2 
{
    private:
        int price;
    public:
        void setPrice(int p) 
        {
            price = p;
        }
        friend void max(Vehicle1, Vehicle2);
};
void max(Vehicle1 v1, Vehicle2 v2) 
{
    if(v1.price > v2.price)
        cout << "Vehicle1 has higher price: " << v1.price << endl;
    else if(v2.price > v1.price)
        cout << "Vehicle2 has higher price: " << v2.price << endl;
    else
        cout << "Both vehicles have same price: " << v1.price << endl;
}
int main()
 {
    Vehicle1 v1;
    Vehicle2 v2;
    v1.setPrice(50000);
    v2.setPrice(60000);
    max(v1, v2);
    return 0;
}
