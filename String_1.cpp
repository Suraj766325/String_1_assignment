// 1) Input a string of size n and update all the odd positions in the string to character ‘#’. Consider0-based indexing.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter string = ";
    getline(cin,s);
    for(int i=0; s[i]!='\0';i++)
    {
        if(i%2==1) s[i]='#';
        
    }
    cout<<s;
}




// 2) Input a string of length n and count all the consonants in the given string.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter string = ";
    getline(cin,s);
    int i,count=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' )
        count++;
    }
    cout<<"total consonant = "<<count;
}




// 3) Check whether the given string is palindrome or not.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter string = ";
    getline(cin,s);
    int i=0,j=s.length()-1;
    bool flag =true;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if(flag==true) cout<<"pelindrome";
    else           cout<<"not pelindrome";
}




// 4) Input a string of even length and reverse the second half of the string.
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter string = ";
    cin>>s;
    reverse(s.begin()+s.length()/2,s.end());
    cout<<s;
}




// 5) Input a string of length less than 10 and convert it into integer without using builtin function.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter string = ";
    cin>>s;
    int i,n=s.length(),sum=0;
    for(i=0;i<n;i++)
    { 
        sum=(sum*10)+(s[i]-48);       
    }
    cout<<"integer = "<<sum;
}


