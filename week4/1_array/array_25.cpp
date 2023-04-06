// Construct Product Array without division operator: each element = product of elements in arr[] except arr[i]

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> return_list;
    for (int i;i<nums.size();i++){
        int prod = 1;
        for (int j=0;j<nums.size();j++){
            if (i!=j){
                prod *= nums[j];
            }
        }
        return_list.push_back(prod);
    }
    return return_list;
}

int main(){
    vector<int> nums = {1,2,3,4};
    cout << productExceptSelf(&nums);
    return 0;
}