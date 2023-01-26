#include <iostream>
#include <vector>

using namespace std;

bool twoDataPointsAddToSum(vector<int> data, int sum) 
{
    // Iterate through all data points
    for (int i = 0; i < data.size(); i++) 
    {
        // Iterate through all other data points
        for (int j = i + 1; j < data.size(); j++) 
        {
            // Check if two data points add to the sum
            if (data[i] + data[j] == sum) 
            {
                return true;
            }
        }
    }

    return false;
}

int main() 
{
    vector<int> data = {1, 2, 3, 4, 5};
    int sum = 7;

    bool result = twoDataPointsAddToSum(data, sum);

    cout << (result ? "1" : "0") << endl;

    return 0;
}