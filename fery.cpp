#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        int l, m;
        cin >> l >> m;

        vector<int> leftCars, rightCars;

        for (int i = 0; i < m; ++i)
        {
            int length;
            string bank;
            cin >> length >> bank;

            if (bank == "left")
            {
                leftCars.push_back(length);
            }
            else
            {
                rightCars.push_back(length);
            }
        }

        int crossings = 0;
        string currentBank = "left";
        while (!leftCars.empty() || !rightCars.empty())
        {
            int ferryLength = l * 100;
            int remainingSpace = ferryLength;

            if (currentBank == "left")
            {
                while (!leftCars.empty() && leftCars.back() <= remainingSpace)
                {
                    remainingSpace -= leftCars.back();
                    leftCars.pop_back();
                }
            }
            else
            {
                while (!rightCars.empty() && rightCars.back() <= remainingSpace)
                {
                    remainingSpace -= rightCars.back();
                    rightCars.pop_back();
                }
            }

            ++crossings;
            currentBank = (currentBank == "left") ? "right" : "left";
        }

        cout << crossings << endl;
    }

    return 0;
}
