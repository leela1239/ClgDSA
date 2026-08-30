/*

Binary Exponentiation :

base ^ exp ---> check exp is even or odd and follow the below steps:
 
 case-1: If exp is even then do base*base and exp/2

 EX: 3^4  Here base=3 exp=4 -->even

 so  step-1: 3^4 --> (3^2)^2 -->(3*3)^2 -->9^2 
     step-2: 9^2 --> (9^2)^1 -->(9*9)^1 -->81

     Ans is 3^4 = 81

case-2: If exp is odd then do base*(base)^exp-1 then exp will be converted to even

EX: 2^3 Here base=2 exp=3 -->odd 

so step-1: 2^3 -->2*(2)^2 again exp is even so follow case-1
   step-2: 2*(2*2)^1 -->2*4 -->8

   Ans is 2^3 = 8

*/

   //code 

   #include<bits/stdc++.h>
   using namespace std;
   int main()
   {
   		int base,exp;
   		cin>>base>>exp; 
   		int res=1;
   		while(exp)
   		{
   			if(exp%2==0)
   			{
   				base=base*base;
   				exp=exp/2;
   			}
   			else
   			{
   				res*=base;
   				exp--;
   			}
   		}
   		cout<<res;

   }
