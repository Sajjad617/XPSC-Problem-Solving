class Solution {
public:
    string intToRoman(int num) {
        string s = "";
        int flag = 0;
        while(num!=0)
        {
            int l = num%10;
            num = num/10;
            if(flag==0) //I-V 1-9
            {
                flag++;
                while(l!=0){
                    if(l==9)
                    {
                        s.push_back('X');
                        s.push_back('I');
                        l -= 9;
                    }
                    else if(l==4)
                    {
                        s.push_back('V');
                        s.push_back('I');
                        l -= 4;
                    }
                    else if(l==5)
                    {
                        s.push_back('V');
                        l -= 5;
                    }
                    else
                    {
                        s.push_back('I');
                        l--;
                    }
                    
                }

            }
            else if(flag==1) //X-L 10-50
            {
                flag++;
                while(l!=0){
                    if(l==9)
                    {
                        s.push_back('C');
                        s.push_back('X');
                        l -= 9;
                    }
                    else if(l==4)
                    {
                        s.push_back('L');
                        s.push_back('X');
                        l -= 4;
                    }
                    else if(l==5)
                    {
                        s.push_back('L');
                        l -= 5;
                    }
                    else
                    {
                        s.push_back('X');
                        l--;
                    }
                    
                }
            }
            else if(flag==2) // C-D 100-500
            {
                flag++;
                while(l!=0){
                    if(l==9)
                    {
                        s.push_back('M');
                        s.push_back('C');
                        l -= 9;
                    }
                    else if(l==4)
                    {
                        s.push_back('D');
                        s.push_back('C');
                        l -= 4;
                    }
                    else if(l==5)
                    {
                        s.push_back('D');
                        l -= 5;
                    }
                    else
                    {
                        s.push_back('C');
                        l--;
                    }
                    
                }
            }
            else // M 1000
            {
                while(l!=0){
                    s.push_back('M');
                    l--;  
                }
            }
        }
        reverse(s.begin(), s.end());
        return s;
    }
};