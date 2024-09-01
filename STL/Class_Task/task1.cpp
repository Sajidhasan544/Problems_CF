#include <bits/stdc++.h>
using namespace std;

void marg(vector<int> &v1, vector<int> &v2, vector<int> &v3, int m1, int m2, int m3)
{

    int left = 0, right = 0, sddd = 0;
    vector<int> temp;

    while (left < m1 && right < m2 && sddd < m3)
    {
        if (v1[left] < v2[right] && v1[left] < v3[sddd])
        {
            temp.push_back(v1[left]);
            left++;
        }
        else if (v2[right] < v1[left] && v2[right] < v3[sddd])
        {
            temp.push_back(v2[right]);
            right++;
        }
        else
        {
            temp.push_back(v3[sddd]);
            sddd++;
        }
    }

    if (left == m1)
    {

        while (right < m2 && sddd < m3)
        {
            if (v2[right] < v3[sddd])
            {
                temp.push_back(v2[right]);
                right++;
            }
            else
            {
                temp.push_back(v3[sddd]);
                sddd++;
            }
        }

        if (m2 == right)
        {
            while (sddd < m3)
            {
                temp.push_back(v3[sddd]);
                sddd++;
            }
        }
        else
        {
            while (right < m2)
            {
                temp.push_back(v2[right]);
                right++;
            }
        }
    }
    else if (right == m2)
    {
        while (left < m1 && sddd < m3)
        {
            if (v1[left] < v3[sddd])
            {
                temp.push_back(v1[left]);
                left++;
            }
            else
            {
                temp.push_back(v3[sddd]);
                sddd++;
            }
        }

        if (m3 == sddd)
        {
            while (left < m1)
            {
                temp.push_back(v1[left]);
                left++;
            }
        }
        else
        {
            while (right < m2)
            {
                temp.push_back(v2[right]);
                right++;
            }
        }
    }
    else if (sddd == m3)
    {
        while (left < m1 && right < m2)
        {
            if (v1[left] < v2[right] && v1[left] < v3[sddd])
            {
                temp.push_back(v1[left]);
                left++;
            }
            else
            {
                temp.push_back(v2[right]);
                right++;
            }
        }

        while (left < m1 && right < m2)
        {
            if (v1[left] < v2[right])
            {
                temp.push_back(v1[left]);
                left++;
            }
            else
            {
                temp.push_back(v2[right]);
                right++;
            }
        }

        if (m2 == right)
        {
            while (left < m1)
            {
                temp.push_back(v1[left]);
                left++;
            }
        }
        else
        {
            while (right < m2)
            {
                temp.push_back(v2[right]);
                right++;
            }
        }
    }

    for (auto it : temp)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {6, 7, 8, 9};
    vector<int> v3 = {10, 11, 12, 13};
    
    marg(v1, v2, v3, v1.size(), v2.size(), v3.size());
}
