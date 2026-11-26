
#include <iostream>
#include <random>
using namespace std;
void z1()
{
    {
        const int N = 10;
        int arr[N];

        random_device rd;              
        mt19937 gen(rd());             
        uniform_int_distribution<> dist(1, 100); 

        for (int i = 0; i < N; ++i)
            arr[i] = dist(gen);

        for (int x : arr)
        cout << x << " ";
        cout << "\n";
        auto [mn, mx] = minmax_element(arr, arr + N);
        cout << "минимальный = " << *mn << ", максимальный = " << *mx << "\n";

    }
}

void z2() 
{





}






























int main()
{
    setlocale(LC_ALL, "RU");
    z1();
    cout << "\n\n\n";
    z2();
    cout << "\n\n\n";
    return 0;
}


