class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int i=0,res=0;
        for(int j=0;j<32;j++){
            if(((1<<j)&n)!=0){
                res|=(1<<(31-j));
            }
        }
        return res;

        
    }
};
