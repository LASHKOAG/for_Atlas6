#include <iostream>

using namespace std;

struct Car{
    int km;
    float price;
    //char color[20];
    int array[50];

};
struct Car3{
    int km;
    float price;
    //char color[20];
    int array[50];

};
struct Car1{
    int km;
    float price;
    //char color[20];
    int array[50];

};
struct Car2{
    int km;
    float price;
    //char color[20];
    int array[50];

};

int main()
{
    cout << "Hello World!" << endl;
    Car mercedes;

    mercedes.km = 100000;
    mercedes.price = 10000000;
    mercedes.array[0] = 5;


    return 0;
}
