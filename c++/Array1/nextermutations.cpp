#include<iostream>
#include<vector>
#include<algorithm> // Include the algorithm header for reverse
using namespace std;

void display(vector<int>& a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void next_permutations(vector<int>& nums) {
    int n = nums.size();
    // step-1 find pivot element 
    int idx = -1;
    for(int i = n - 2; i >= 0; i--) {
        if(nums[i] < nums[i + 1]) {
            idx = i;
            break;
        }
    }
    if(idx == -1) { // if array is already greater
        reverse(nums.begin(), nums.end());
        return;
    }
    //step -2 sorting / reverse after pivot 
    reverse(nums.begin() + idx + 1, nums.end());
    // step -3 finding the just greater element than idx
    int j = -1;
    for(int i = idx + 1; i < n; i++) {
        if(nums[i] > nums[idx]) {
            j = i;
            break;
        }
    }
    // step -4 swapping idx and idx+1
    int temp = nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;
    return;
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    cout << "Enter elements of vector: ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
   
    display(v);
    next_permutations(v);
    display(v);
    return 0;
}