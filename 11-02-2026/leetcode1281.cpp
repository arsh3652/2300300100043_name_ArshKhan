class Solution {
    public:
        int subtractProductAndSum(int n) {
            int sd=0;
            int pd=1;
            int c;
            int r;
            while(n!=0){
                c=n%10;
                pd=pd*c;
                sd=sd+c;
                n=n/10;
            }
        r=pd-sd;
        return r;
        }
       
    };