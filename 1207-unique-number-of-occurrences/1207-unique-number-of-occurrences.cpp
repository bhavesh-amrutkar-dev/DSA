class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        //#1 sort the array
        sort(arr.begin(), arr.end());

        //#2 make new vector to store the ocuurances
        vector<int> v;

        // #3 traverse the array and stote the occurances of an element in a new vector
        for(int i =0; i< arr.size(); i++){
            int count = 1;

            while(i+1 < arr.size() && arr[i] == arr[i+1]){
                count++;
                i++;
            }
            v.push_back(count);
        }

        //#4 sort a new vector
        sort(v.begin(), v.end());

        //#5 return true and fale based on uniqueness of an array.

        for(int i =1; i< v.size(); i++){
            if(v[i] == v[i-1]){
                return false;
            }
           
        }
         return true;



    }
};