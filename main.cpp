//
//  Project I
//
//  Created by Edgar Esparza on 7/11/15.ee
//


#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
     int numberOfRacers;
     int numberOfLoops;
     int racerID = 0;
     int totalTime = 0;
     int timePerLoop = 0;
     int aggregateLoopTime = 0;
     int winnerTime = 999999;
     int winnerID = 0;
    
    cout << "Enter the number of racers : ";
    cin>>numberOfRacers;
    cout << "Enter the number of loops in each race: ";
    cin>>numberOfLoops;
    
     for(int i = 0; i< numberOfRacers; ++i){
     cout<<"Racer ID: ";
     cin>>racerID;
     cout<<"What was the total time for the racer: ";
     cin>>totalTime;
         
    if(totalTime < winnerTime)
     {winnerTime=totalTime;
         winnerID=racerID;}
     
     for (int j = 1; j <=numberOfLoops; ++j){
     cout<<"Please enter the time for loop number "<<j<<": ";
     cin>>timePerLoop;
     aggregateLoopTime+=timePerLoop;
     }
         {
     if((totalTime==aggregateLoopTime))
     cout<<"Both time keepers agree"<<endl;
		else
     cout << "Judges differ by " << abs(totalTime - aggregateLoopTime) << endl;
     aggregateLoopTime=0;
         }
     }
    cout<<"The winner is "<<winnerID<<" with a time of: "<<winnerTime<<endl;
    
    return 0;
}