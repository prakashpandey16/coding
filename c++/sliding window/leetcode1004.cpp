// Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
// Output: 6
// Explanation: [1,1,1,0,0,1,1,1,1,1,1]


#include<iostream>
#include<climits>
using namespace std;

int main()
{
   // Array of integers where 1 represents a 'good' element and 0 represents a 'bad' element.
   int nums[] = {1,1,1,0,0,0,1,1,1,1,0};
   
   // Calculate the size of the array.
   int n = sizeof(nums)/sizeof(nums[0]);

   // flips: Counts the number of flips (changing a 'bad' element to a 'good' one).
   // i: Start index of the current window.
   // j: End index of the current window.
   // k: Maximum number of allowed flips.
   int flips = 0, i = 0, j = 0, k = 2;

   // maxlen: Stores the maximum length of the window found so far.
   // len: Stores the current window length.
   int maxlen = INT_MIN, len = INT_MIN;

   // Iterate through the array using the sliding window technique.
   while(j < n)
   {
       // If the current element is 'good' (1), simply expand the window.
       if(nums[j] == 1) 
           j++;
       else {
           // If the current element is 'bad' (0) and we can still flip it.
           if(flips < k)
           {
               flips++; // Flip the current 'bad' element.
               j++; // Expand the window.
           }
           else {
               // If we cannot flip more 'bad' elements, update the length.
               len = j - i;
               maxlen = max(len, maxlen);

               // Move the start of the window to exclude one 'bad' element.
               while(nums[i] == 1)
               {
                   i++; // Skip all 'good' elements at the start of the window.
               }
               i++; // Move past the first 'bad' element in the window.
               j++; // Continue expanding the window.
           }
       }
   }

   // Update the maximum length for the last window.
   len = j - i;
   maxlen = max(len, maxlen);

   // Output the maximum length of the window found.
   cout << maxlen;
}
