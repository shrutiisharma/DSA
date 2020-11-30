//Max Circular SubArray Sum

#include <bits/stdc++.h>
using namespace std;

int circularSubArraySum(int arr[], int num)
{
    int sum = 0;
    for (int i = 0; i < num; i++)
    sum += arr[i];
    
    int curr_max = arr[0], max_so_far = arr[0], curr_min = arr[0], min_so_far = arr[0];
    for (int i = 1; i < num; i++)
    {
        // Kadane's Algorithm to find Maximum subarray sum.
        curr_max = max(curr_max + arr[i], arr[i]);
        max_so_far = max(max_so_far, curr_max);

        // Kadane's Algorithm to find Minimum subarray sum.
        curr_min = min(curr_min + arr[i], arr[i]);
        min_so_far = min(min_so_far, curr_min);
    }
    if(min_so_far == sum) return max_so_far;
    return max(max_so_far, sum - min_so_far);
}

int main()
{
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int T;
    //testcases
    cin>> T;
    while(T--)
    {
        int num;
        //size of array
        cin>>num;
        int arr[num];
        //inserting elements
        for(int i=0; i<num; i++)
        cin>>arr[i];
        //calling function
        cout << circularSubArraySum(arr, num) <<endl;
    }
    return 0;
}
