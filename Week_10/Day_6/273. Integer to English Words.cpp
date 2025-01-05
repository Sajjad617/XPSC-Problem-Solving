class Solution {
    vector<string> v;
public:
    string numberToWords(int num) {
        string final = "";
        int flag = 1;
        // vector<string> v;
        if(num==10)
        {
            final = "Ten";
            return final;
        }
        while(num!=0)
        {
            int l = num%10;
            num = num/10;
            if(flag==1)
            {
                // flag++;
                if(l!=0)
                {
                    string z = fun(l);
                    v.push_back(z);
                }
                
            }
            else if(flag==2)
            {
                if(l==1)
                {
                    string z = elv_nin();
                    v.pop_back();
                    v.push_back(z);
                }
                else
                {
                    string z = t_nin(l);
                    v.push_back(z);
                }
            }
            else if(flag==3)
            {
                v.push_back("Hundred");
                string z = fun(l);
                v.push_back(z);

            }
            else if(flag==4)
            {
                v.push_back("Thousand");
                string z = fun(l);
                v.push_back(z);
                // l = num%10;
                // num = num/10;
                
            }
            else if (flag==5)
            {
                if(l==1)
                {
                    string z = elv_nin();
                    v.pop_back();
                    v.push_back(z);
                }
                else
                {
                    string z = t_nin(l);
                    v.push_back(z);
                }
            }
            else if (flag==6)
            {
                v.push_back("Hundred");
                string z = fun(l);
                v.push_back(z);
            }
            else if (flag==7)
            {
                v.push_back("Million");
                string z = fun(l);
                v.push_back(z);
            }
            else if (flag==8)
            {
                if(l==1)
                {
                    string z = elv_nin();
                    v.pop_back();
                    v.push_back(z);
                }
                else
                {
                    string z = t_nin(l);
                    v.push_back(z);
                }
            }
            else if (flag==9)
            {
                v.push_back("Hundred");
                string z = fun(l);
                v.push_back(z);
            }
            else if (flag==10)
            {
                v.push_back("Billion");
                string z = fun(l);
                v.push_back(z);
            }

            flag++;
        }
        reverse(v.begin(), v.end());
        for(auto x : v)
        {
            final += x;
            final += " ";
            // cout << x << " ";
        }
        final.pop_back();
        return final;
    }
    string fun (int n){
        string s;
        if(n==1)
        {
            s = "One";
        }
        else if(n==2)
        {
            s = "Two";
        }
        else if(n==3)
        {
            s = "Three";
        }
        else if(n==4)
        {
            s = "Four";
        }
        else if(n==5)
        {
            s = "Five";
        }
        else if(n==6)
        {
            s = "Six";
        }
        else if(n==7)
        {
            s = "Seven";
        }
        else if(n==8)
        {
            s = "Eight";
        }
        else if(n==9)
        {
            s = "Nine";
        }
        return s;         
    }
    string elv_nin (){
        // v.pop_back();
        string n = v.back();
        string s;
        if(n=="One")
        {
            s = "Eleven";
        }
        else if(n=="Two")
        {
            s = "Twelve";
        }
        else if(n=="Three")
        {
            s = "Thirteen";
        }
        else if(n=="Four")
        {
            s = "Fourteen";
        }
        else if(n=="Five")
        {
            s = "Fifteen";
        }
        else if(n=="Six")
        {
            s = "Sixteen";
        }
        else if(n=="Seven")
        {
            s = "Seventeen";
        }
        else if(n=="Eight")
        {
            s = "Eighteen";
        }
        else if(n=="Nine")
        {
            s = "Nineteen";
        }           
        return s;
    }
    string t_nin(int n){
        string s;
        if(n==2)
        {
            s = "Twenty";
        }
        else if(n==3)
        {
            s = "Thirty";
        }
        else if(n==4)
        {
            s = "Forty";
        }
        else if(n==5)
        {
            s = "Fifty";
        }
        else if(n==6)
        {
            s = "Sixty";
        }
        else if(n==7)
        {
            s = "Seventy";
        }
        else if(n==8)
        {
            s = "Eighty";
        }
        else if(n==9)
        {
            s = "Ninety";
        }
        return s;           
    }

};