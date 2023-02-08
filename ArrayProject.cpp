#include <iostream>
using namespace std;
int main()
{
    //short mas[4] = {10,20,30,40};
    //mas[0] = 3000;
    //cout << mas[0];



    /*int mas[10] = {};
    for (int i = 0; i <= 9; i++) {
        mas[i] = i+1;
        cout << mas[i]<<endl;
    }*/




    /*const int size = 20;
    unsigned short mas[size] = {};
    short i;
    for (i = 1; i < size; i++) {
        mas[i] = rand() % 1000;
        cout << mas[i] << " ";
    }
    cout << endl;
    int b = mas[1];
    for (int a = 1; a < size; a++) {
        if (b < mas[a]) {
            b = mas[a];
        }
    }
    cout << b;*/





    const int size = 20;
    unsigned short mas[size] = {};
    short i;
    float  sum=0;
    for (i = 1; i < size; i++) {
        mas[i] = rand() % 1000;
        cout << mas[i] << " ";
        sum = sum+mas[i];
    }
    cout << endl;
    cout << sum/size;
}

