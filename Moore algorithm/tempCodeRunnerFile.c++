
int morre_algorithm(vector<int>&arr){
    int vote = 0;
    int candidate = -1;
    for(int i = 0; i< arr.size() ;i++){
        if(vote == 0){
            candidate = arr[i];
            vote++;

        }
        else{

        if(arr[i] == candidate)
        vote++;
        else vote--;

        }
    }
    return candidate;
}

int main()
{
    vector<int>arr = {1,2,5,4,5,2,4,3