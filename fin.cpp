#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums;
    int x, t, sum = 1, count = 0;
    cout << "Enter number of elements: ";
    cin >> t;
    
    while (t--)
    {
        cin >> x;
        nums.push_back(x);
        if (x == 0) 
            count++;
        else
            sum *= x;
    }
    
    vector<int> fnums(nums.size(), 0); // Initialize fnums with size and default value 0
    
    for (int i = 0; i < nums.size(); i++)
    {
        if (count > 1 && nums[i] != 0)
        {
            fnums[i] = 0;
            continue;
        }
        if (nums[i] == 0)
        {
            fnums[i] = sum;
            continue;
        }
        if (nums[i] != 0)
        {
            fnums[i] = sum / nums[i];
        }
    }
    
    for (int i = 0; i < nums.size(); i++)
    {
        cout << fnums[i] << " ";
    }
    return 0;
}
