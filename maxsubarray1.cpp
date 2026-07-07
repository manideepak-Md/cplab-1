#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int maxSubArray(int nums[], int size)
{
int max_sum = INT_MIN;
for (int i = 0; i < size; i++)
{
int current_sum = 0;
for (int j = i; j < size; j++)
                               {
     current_sum += nums[j];
            max_sum = max(max_sum, current_sum);
        }
    }
    return max_sum;
}

int main()
{
    int size;
    cout << "enter size: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "invalid" << endl;
        return 1;
    }

    int nums[1000];
    cout << "enter elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    int res = maxSubArray(nums, size);
    cout << "max subarray sum = " << res << endl;

    return 0;
}
