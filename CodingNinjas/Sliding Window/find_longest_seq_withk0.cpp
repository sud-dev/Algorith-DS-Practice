#include<bits/stdc++.h>
using namespace std;
void longestSeq(int arr[],int n,int k)

{
	int left = 0;		// left represents current window's starting index

	int count = 0;		// stores number of zeros in current window

	int window = 0;	 // stores maximum number of continuous 1's found
						// so far (including k zeroes)

	int leftIndex = 0;	// store left index of maximum window found so far

	// maintain a window [left..right] containing at-most k zeroes
	for (int right = 0; right < n; right++)
	{
		// if current element is 0, increase count of zeros in the
		// current window by 1
		if (arr[right] == 0)
			count++;

		// window becomes unstable if number of zeros in it becomes
		// more than k
		while (count > k)
		{
			// if we have found zero, decrement number of zeros in the
			// current window by 1
			if (arr[left] == 0)
				count--;

			// remove elements from the window's left side till window
			// becomes stable again
			left++;
		}

		// when we reach here, the window [left..right] contains at-most
		// k zeroes and we update max window size and leftmost index
		// of the window
		if (right - left + 1 > window)
		{
			window = right - left + 1;
			leftIndex = left;
		}
	}
	cout<< window<<
			leftIndex<<(leftIndex + window - 1);
}
int main(){
int arr[] = { 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0 };
	int k = 2;

	int n = sizeof(arr) / sizeof(arr[0]);

	longestSeq(arr, n, k);

	return 0;


}
