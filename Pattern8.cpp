class Solution {
public:
    void pattern8(int n) {

for ( int i = 0 ; i<n ; i++ )
{
    for ( int j = 0; j<i;j++)
   { cout<<" ";}

   //for sapacing we are create formula 2n-2i{when start j=1}
   // if start j=0 then 2n-2i+1
    for ( int j=1; j < 2*n-(2*i); j++)
    {cout<<"*";}
    cout<< endl;
}
    }
};
