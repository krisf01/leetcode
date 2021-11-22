class Solution
{
    public:
    string intToRoman(int num)
    {
        int number[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string romans[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        string convert;
        
        while(num > 0)
        {
            for (int i = 12; i >= 0; i--)
            {
                int div = num / number[i];
                num = num % number[i];
                if (div)
                {
                     while(div--)
                     {
                         
                         convert += romans[i];
                
                     }
                }
            }
          
        }
        return convert;
    }
};
