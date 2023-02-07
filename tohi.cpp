   #include<bits/stdc++.h>
   using namespace std;

struct toh
{
    public:
        char from;
        char to;
        char aux;
        int n;
};

void towerOfHanoi(int n, char source, char auxiliary, char destination){

    stack<toh> st;      //Declaring a stack. 

    while(n>=1 or !st.empty())
    {
        while(n>=1)
        {                 //Save the current state and move to  the towerOfHanoi(n-1,source,destination,auxiliary).

            toh cur;
            cur.from=source;
            cur.aux=auxiliary;              
            cur.to=destination;
            cur.n=n;
            st.push(cur);
            swap(destination,auxiliary);
            n--;
        }

        toh cur = st.top();
        st.pop();
        cout << "Move disk " << cur.n << " from rod " << cur.from <<  " to rod " << cur.to << endl; 

        if(cur.n>=1)
        {
            source=cur.aux;           // Simulates the towerOfHanoi(n-1,auxiliary,source,destination) of Recursive Step.

            auxiliary=cur.from;            
            destination=cur.to;
            n=cur.n-1; 
        }
    }
}

int main(){
     int n;              // Number of disks.
     cin>>n;
     towerOfHanoi(n,'A','B','C');

     return 0;
}
