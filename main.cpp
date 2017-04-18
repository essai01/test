#include <QCoreApplication>
#include<iostream>

using namespace std;


int main(int argc, char *argv[])
{

    srand(time(NULL));
    cout << "random : " << rand() % (int) 5e+6 + 1e+6 << endl;

    for(int i = 0; i < 5; ++i)
     {
         cout << i << "       boucle 1 (begin)" << endl;
         cout << "     " << endl;

         for(int j = 0; j < 5; ++j)
         {
             cout << "boucle 2 (begin) " << j << endl;
             if(i == 3)
                 break;

             cout << "boucle 2 (end) " << j << endl;
         }
         cout << i << "       boucle 1 (end)" << endl;
         cout << "     " << endl;
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

