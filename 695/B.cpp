#include<iostream>
using namespace std;
#define fn for(int i=0; i<n; i++)
int main(){
    int t;  // Number of test cases
    cin>>t;
    while (t--)
    {
        int n;  // Number of places
        cin>>n;
        int a[n];   // Height of all places
        fn cin>>a[i];
        int status[n];  // Status of the places
            // 1 for Hill
            // 0 for neither
            // -1 for valley
        fn status[i] = 0;
        int totalIntimtidation = 0; // Total number of places which are intimidated
        fn{ 
            if(i > 0 and i < n-1){    // If the place is not first or last
                if(a[i] > a[i-1] && a[i] > a[i+1])  // If the hight of the current place is more than both adjacent places
                    status[i] = 1, totalIntimtidation += 1; // Give it the status of a hill and increase the total number of intimidated places by 1
                else if(a[i] < a[i-1] && a[i] < a[i+1])  // If the height of current place is lesser than both adjacent places
                    status[i] = -1, totalIntimtidation += 1;    // Give it the status of a valley and increase the total number of intimidated places by 1
                else
                {
                    status[i] = 0;  // Else, it is neihter
                }
            }
        }
        // fn cout<<status[i]<<' ';
        // cout<<'\n';
        int result = totalIntimtidation; // Total number of Intimidations if you're allowed to make one change
        // If there is no more than one dip or peak
        if(totalIntimtidation < 2){ // If there is 1 intimidated places, it can be eliminated
            result = 0;
            cout<<"0\n";    // Print the result
            continue;   // Do not execute later part 
        }
        // Intimidation Value can be decreased by 3 in maximum case
        int maxInLine[n];   // Number of adjacent places which are intimidated
        fn  maxInLine[i] = 0;   // Initially, all of them are 0
        bool flag = false;
        int maxTotal = 0;
        // There will be a special case for 2nd and 2nd last element
        if(status[1] == 1 || status[1] == -1)
            maxInLine[1] = 1, maxTotal = 1;
        if(status[n-2] == 1 || status[n-2] == -1)
            maxInLine[n-2] = 1, maxTotal = 1;
        
        fn{
            // if()
            if(i > 1 && i < n-1){
                if(status[i] == 1){
                    if(status[i-1] == -1)
                        maxInLine[i]+= 1;
                    if(status[i+1] == -1)
                        maxInLine[i]+= 1;
                    
                }
                if(status[i] == -1){
                    if(status[i-1] == 1)
                        maxInLine[i]+= 1;
                    if(status[i+1] == 1)
                        maxInLine[i]+= 1;
                    
                }
            }

            maxTotal = max(maxTotal, maxInLine[i]);
            if(maxTotal == 2){
                flag = true;
                break;
            }
        }
        // cout<<"maxTotal: "<<maxTotal<<'\n';
        // cout<<"totalIntimidation: "<<totalIntimtidation<<'\n';
        if(maxTotal == 2){
            totalIntimtidation -= 3;
        }
        if(maxTotal == 1){
            totalIntimtidation -= 2;
        }
        else if(maxTotal == 0){
            totalIntimtidation -= 1;
        }
        
        cout<<max(0, totalIntimtidation)<<'\n';
    }
    return 0;    
}