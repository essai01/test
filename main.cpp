#include <QCoreApplication>
#include<iostream>

using namespace std;


int main(int argc, char *argv[])
{

    srand(time(NULL));
    cout << "random : " << rand() % (int) 5e+6 + 1e+6 << endl;

    for(int i = 0; i < 5; ++i)
     {
         for(int j = 0; j < 5; ++j)
         {
           cout << "i / j : %d / $d" << i << j << endl;
         }
     }

//    for(int i = 0; i < 10; ++i)
//     {
//         // statement1
//         for(int j = 0; j < 10; ++j)
//         {
//             //statement2
//             if(someTest)
//                 break;
//         }
//         //statement3
//     }

    return 0;
}

