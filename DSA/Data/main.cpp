#include <iostream>

using namespace std;

int main()
{
    int array[] = {1, 2, -3, 2, 5, -3, 5, 6, -17};
    int n = sizeof(array) / sizeof(array[0]);
    int MAX_SUM_HERE = 0;
    int MAX_SUM_FAR = array[0];
    int START_POINT = 0;
    int END_POINT = 0;

    for (int i = 0; i < n; i++)
    {
        MAX_SUM_HERE += array[i];
        if (MAX_SUM_FAR < MAX_SUM_HERE)
        {
            MAX_SUM_FAR = MAX_SUM_HERE;
            END_POINT = i;
        }
        if (MAX_SUM_HERE <= 0)
        {
            MAX_SUM_HERE = 0;
            if (i < n - 1)
            {
                START_POINT = i + 1;
            }
        }
    }

    cout << "subarray_sum_max : " << MAX_SUM_FAR << endl;
    cout << "With Start Point : " << START_POINT << "\nAnd End Point : " << END_POINT << endl;
}