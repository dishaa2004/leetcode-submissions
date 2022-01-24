#define ll long long
const int N = 300000;
class NumArray {
public:
    ll arr[N];
    ll tree[4*N];

    // INITIALIZE
    void initializeTree(ll heap_index, ll l, ll r){
        //a leaf is reached
        if(l == r){
            tree[heap_index]= arr[l];
            return;
        }
        ll mid= (l+r)/2;
        initializeTree(2*heap_index, l, mid);
        initializeTree(2*heap_index+1, mid+1, r);
        // Make changes here
        tree[heap_index]= tree[2*heap_index] + tree[2*heap_index+1];
    }

    // QUERY
    ll treeQuery(ll heap_index, ll l, ll r, ll st, ll nd){
        //if current node's range is completely outside query range
        //returning something that will not effect the result
        if(r < st || l > nd) return 0;
        //if current node's range is completely inside query range
        if(l >= st && r <= nd){
            return tree[heap_index];
        }
        ll mid= (l+r)/2;
        // Make changes here
        return (treeQuery(2*heap_index, l, mid, st, nd) + treeQuery(2*heap_index+1, mid+1, r, st, nd));
    }

    // UPDATE 
    void treeUpdate(ll heap_index, ll l, ll r, ll array_index, ll new_value){
        if(l == r && l == array_index){
              tree[heap_index] = new_value;
            return;
        }
        ll mid= (l+r)/2;
        if(array_index <= mid)
            treeUpdate(2*heap_index, l, mid, array_index, new_value);
        else
            treeUpdate(2*heap_index+1, mid+1, r, array_index, new_value);
        // Make changes here
        tree[heap_index]=  (tree[2*heap_index] + tree[2*heap_index+1]);
    }
    
    int nn;
    NumArray(vector<int>& nums) {
        nn = nums.size()+1;
        for(int i=0;i<nums.size();i++){
            arr[i+1] = nums[i];
        }
        initializeTree(1,1,nn);
    }
    
    void update(int index, int val) {
        treeUpdate(1,1,nn,index+1,val);
    }
    
    int sumRange(int left, int right) {
        return treeQuery(1,1,nn,left+1,right+1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */