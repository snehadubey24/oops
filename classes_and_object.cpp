//classes and object in c++
#include <iostream>
#include<list>

using namespace std;

class YouTubeChannel{
    public://by default our all data members and functions are private so we need to use public access specifier.
    //these are attribute of class . attribute means something which describe the class.
    string Name;
    string OwnerName;
    int subscriberCount;
    //here we use list so we need to include list library in header also.
    list<string>publishedVideos;//here in place of string we can make our own class of videos and then include it in list.
    
};

int main()
{
    YouTubeChannel ytChannel;/*this is our object of class YouTubeChannel. 
    We can create an object by using class_name followed by object_name.*/
    ytChannel.Name="Coder";
    ytChannel.OwnerName="Sneha";
    ytChannel.subscriberCount=1800;
    ytChannel.publishedVideos={"c++ for start","python","java"};
    
    cout<<"Name:"<<ytChannel.Name<<endl;
    cout<<"OwnerName:"<<ytChannel.OwnerName<<endl;
    cout<<"subscriberCount:"<<ytChannel.subscriberCount<<endl;
    cout<<"Videos:"<<endl;
    //for 
    for(string videoTitles:ytChannel.publishedVideos)
    {
        cout<<videoTitles<<endl;
    }
}
