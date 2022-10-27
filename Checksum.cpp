#include<iostream>
#include<string.h>
 
using namespace std;
 
int main()
{
    char a[100],b[100];
    char sum[100],complement[100];
    int i;
    
	cout<<"\nEnter first binary  :  ";
    cin>>a;
    cout<<"Enter second binary :  ";
    cin>>b;
    
if(strlen(a)==strlen(b))
    {
        char carry='0';
        int length=strlen(a);


//Binary addition 
for(i=length-1;i>=0;i--)
        {
            if(a[i]=='0' && b[i]=='0' && carry=='0')
            {
                sum[i]='0';
                carry='0';
            }
            else if(a[i]=='0' && b[i]=='0' && carry=='1')
            {
                sum[i]='1';
                carry='0';
 
            }
            else if(a[i]=='0' && b[i]=='1' && carry=='0')
            {
                sum[i]='1';
                carry='0';
 
            }
            else if(a[i]=='0' && b[i]=='1' && carry=='1')
            {
                sum[i]='0';
                carry='1';
 
            }
            else if(a[i]=='1' && b[i]=='0' && carry=='0')
            {
                sum[i]='1';
                carry='0';
 
            }
            else if(a[i]=='1' && b[i]=='0' && carry=='1')
            {
                sum[i]='0';
                carry='1';
 
            }
            else if(a[i]=='1' && b[i]=='1' && carry=='0')
            {
                sum[i]='0';
                carry='1';
 
            }
            else if(a[i]=='1' && b[i]=='1' && carry=='1')
            {
                sum[i]='1';
                carry='1';
 
            }
            else
                break;
        }
        cout<<"======================================\n\tSum     =     "<<carry<<sum;   //printing the sum of two binary strings
 
 
 		//Getting the Checksum Value of the 
		//sum of the two binary strings
        for(i=0;i<length;i++)
        {
            if(sum[i]=='0')
                complement[i]='1';
            else
                complement[i]='0';
        }
        
		if(carry=='1')
            carry='0';
        else
            carry='1';
    
    	cout<<"\n\tChecksum=     "<<carry<<complement; //printing the checksum result
    }
    else
        cout<<"\nWrong input strings";
        
    return 0;
}
