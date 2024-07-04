#ifndef EPISODE_H
#define EPISODE_H

#include <iostream>
#include <string>

using namespace std;



class Episode{

    private:
        string podcastTitle;
        string host;
        string episodeTitle;
        string category;
        string audio;
        string videoFile;
    
    public:
        Episode(string podcastTitle, string host, string episodeTitle, string category, string audio, string videoFile);
        string getPodcastTitle()const;
        string getHost()const;
        string getEpisodeTitle()const;
        string getCategory()const;
        string getAudio()const;
        string getVideoFile()const;
        void print(ostream& ost) const;
        friend ostream& operator<<(ostream& ost, const Episode& e);



};

#endif