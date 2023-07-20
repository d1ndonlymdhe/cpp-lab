#include <iostream>
using namespace std;
template <typename T>
void avgMult(T num[], int l, T &avg, T &mult)
{
    T sum = 0;
    mult = l == 0 ? 0 : 1;
    for (int i = 0; i < l; i++)
    {
        sum += num[i];
        mult *= num[i];
    }
    avg = sum / (T)l;
}
int main()
{
    float nums[3] = {1.5, 2.5, 3.5};
    float avg;
    float mult;
    avgMult<float>(nums, 3, avg, mult);
    cout << "avg = " << avg << " mult = " << mult;
    return 0;
}