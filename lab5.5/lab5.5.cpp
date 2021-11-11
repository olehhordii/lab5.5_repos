#include <iostream>
#include <cmath>

using namespace std;

double C(double n, double k,double level , double &depth)
{
    if (level>depth)
    {
        depth=level ;
    }
    if (n > 0)
    {
        return C(n - 1, k - 1, level + 1, depth)+C(n-1,k, level + 1, depth);
    }
    if (k = n || k == 0) {
        return 1;
    }
        

    return 0;
   
}

int main()
{
        double n, k;
        double depth = 0;
        cout << "enter n : ";
        cin >> n;
        cout << "enter k: ";
        cin >> k;
        cout <<"Binom = " << C(n, k, 1, depth) << endl;
        cout << "depth = " << depth << endl;
    
    cin.get();
    return 0;
}