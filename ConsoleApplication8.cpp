#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    const int Fir = 3;
    
    const int Sec = 3; 

    int arr[Fir][Sec] =
    {
        1,9,2,
        5,7,6,
        4,3,8 
    }; 

    int temp = 0;

    cout << "Оригинальный массив:\n";

    for (int i = 0; i < Fir; i++)
    {
        for (int j = 0; j < Sec; j++)
        {
            cout.width(5);

            cout << arr[i][j];
        }
        cout << '\n';
    }

    cout << "\n\nОтсортированный массив:\n";
    for (int m = 0; m < (Fir * Sec - 1); m++)
        for (int i = 0; i < Fir; i++) 
        {
            for (int j = 0; j < Sec; j++) 
            {
                
                if (i == Sec - 1 && j == Sec - 1)
                {  
                    continue;
                }
              

                if (arr[i][j] > arr[i][j + 1]) 
                { 
                    temp = arr[i][j]; 

                    arr[i][j] = arr[i][j + 1];

                    arr[i][j + 1] = temp;
                }
            }
        }
    
    for (int i = 0; i < Fir; i++)
    {
        for (int j = 0; j < Sec; j++)
        {
            cout.width(5);

            cout << arr[i][j];
        }
        cout << '\n';
    }
   
    return 0;
}