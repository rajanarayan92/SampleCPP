#include<algorithm>
#include <bits/stdc++.h>
#include<iostream>

using namespace std;

bool FindTriplet(int array[], int len)
{
    int l, r;

    // Square the elements
    for(int i= 0; i< len; i++)
    {
        array[i] *= array[i];
    }

    // Sort the array
    sort(array, array + len);

    for(int i= 0; i< len; i++)
    {
        cout<< array[i] << ", ";
    }
    cout <<"\n";

    // Satisfy condition a^2 = b^2 + c^2
    // Assume last element is a^2 and then continue
    int i = 0;
    for(i = len - 1; i >=2; i-- )
    {
        //pick lowest as 0, highest as i-1
        l = 0; r = i-1;
        // Loop until they meet.
        while( l < r )
        {
            if(array[i] == array[l] + array[r])
            {
                // We found the triplet.
                cout << "Found triplet, with sum = " << array[i] << "\n";
                return true;
            }
            else
            {
                // We need to decrease the sum, decrement right index
                if(array[l] + array[r] > array[i])
                {
                    r--;
                }
                else // need to increase the sum, incremet left index
                {
                    l++;
                }
            }
        }
    }

    // We are here means triplet not found
    return false;

}

int main()
{
    int array[]= {3, 1, 4, 6, 5};
    bool rtn = FindTriplet(array, sizeof(array)/sizeof(array[0]));

    cout <<" Return value is " << rtn;
}
