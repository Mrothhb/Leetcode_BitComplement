class Solution {
public:
    int bitwiseComplement(int N) {
    if(N == 0){
        return 1;
    }
    int mask0 = 0;
    int mask1 = 1;
    int number = 0;
    
    while( N != 0){
        if(N%2==0){
            number=mask1 | number;
            mask1= mask1 << 1;
        }
        else{
            mask1 = mask1 << 1;
        }
        N=N/2;
    }
        
    return number;
    }        
    
};




