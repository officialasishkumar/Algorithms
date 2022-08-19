// So the idea is that if are asked to find the number of subarrays which 
// satisfies some constant k may it be sum or distinct integers than we can use this code

// Exactly k times = At Most k times - At Most k - 1 times.



int atMost(vector<int> &nums, int S){
        int res = 0, i = 0, n= nums.size();
        for(int j = 0; j<n; j++){
            S-=nums[j]; // or anything depending on the problem. 
            while(S<0) S+=nums[i++]; // Since we are going out of our bounds of k. We gotta bring it back to it's condition and decrease our window size.
            res+=j-i+1; // this one stores the number of subarrays that can be formed by an array of size j-i+1
        }
        return res;
}