// Find the two non-repeating elements in an array of repeating elements
#include <bits/stdc++.h>
using namespace std;

vector<int> get2NonRepeatingNos(int nums[], int n){
	sort(nums, nums + n);
	vector<int> ans;
	for (int i = 0; i < n - 1; i = i + 2) {
		if (nums[i] != nums[i + 1]) {
			ans.push_back(nums[i]);
			i = i - 1;
		}
	}
	if (ans.size() == 1)
		ans.push_back(nums[n - 1]);
	return ans;
}

int main(){
	int arr[] = { 2, 3, 7, 9, 11, 2, 3, 11 };
	int n = sizeof(arr) / sizeof(*arr);
	vector<int> ans = get2NonRepeatingNos(arr, n);
	cout << "The non-repeating elements are " << ans[0] << " and " << ans[1] << endl;
}